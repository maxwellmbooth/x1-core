import common_pkg::*;

module stage_if (
  input logic clk_i, rst_i,
  input ctrl_if_t ctrl_if_i,
  input logic imem_rsp_valid_i,
  input logic imem_req_ready_i,
  input mem_rsp_t imem_rsp_i,
  input pc_redirect_t pc_redirect_i,

  output logic imem_req_valid_o,
  output logic imem_rsp_ready_o,
  output mem_req_t imem_req_o,
  output info_if_t info_if_o,
  output if_id_t if_id_o
);

  // Global IMEM values
  logic [3:0] fetch_epoch_q;
  logic [3:0] fetch_id_d, fetch_id_q;

  wire imem_req_accepted = imem_req_valid_o && imem_req_ready_i; // IMEM request accepted this cycle
  wire imem_rsp_accepted = imem_rsp_valid_i && imem_rsp_ready_o; // IMEM response accepted this cycle

  // Program counter
  logic [XLEN-1:0] pc_q;
  logic [XLEN-1:0] pc_issued_q;
  logic [XLEN-1:0] pc_next;
  wire pc_we;
  pc_redirect_t pc_redirect_pending_q;

  assign pc_we = !ctrl_if_i.stall_hold_pc;
  
  program_counter program_counter_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .pc_we_i(pc_we),
    .pc_next_i(pc_next),
    .pc_o(pc_q)
  );

  always_comb begin
    pc_next = pc_q;
    if (pc_redirect_i.valid) begin
      pc_next = pc_redirect_i.target;
    end else if (pc_redirect_pending_q.valid) begin
      pc_next = pc_redirect_pending_q.target;
    end else if (imem_req_accepted) begin // only increment PC if the last request was accepted
      pc_next = pc_q + 'd4;
    end
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      pc_redirect_pending_q <= '0;
      fetch_epoch_q <= '0;
    end else begin
      if (pc_redirect_i.valid) begin
        fetch_epoch_q <= fetch_epoch_q + 'd1;
        if (!pc_we) begin
          pc_redirect_pending_q <= pc_redirect_i;
        end else begin
          pc_redirect_pending_q.valid <= 1'b0;
        end
      end else if (pc_redirect_pending_q.valid && pc_we) begin
        pc_redirect_pending_q.valid <= 1'b0;
      end
    end
  end

  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      pc_issued_q <= '0;
    end else if (!ctrl_if_i.stall_hold_pc) begin
      pc_issued_q <= pc_q;
    end
  end

  // IMEM request
  mem_req_t imem_req_d, imem_req_q;

  logic imem_req_valid_d, imem_req_valid_q;

  logic imem_req_inflight_d, imem_req_inflight_q;
  
  wire imem_req_has_space = !imem_req_inflight_q || imem_rsp_accepted;
  wire imem_req_issue = (!imem_req_valid_q || imem_req_accepted) && imem_req_has_space && !ctrl_if_i.flush_if_id && !ctrl_if_i.stall_bubble_if_id && !ctrl_if_i.stall_hold_if_id;

  assign info_if_o.imem_req_inflight = imem_req_inflight_q;

  always_comb begin
    imem_req_valid_d = imem_req_accepted? 1'b0 : imem_req_valid_q; // will make invalid if already accepted or hold otherwise
    imem_req_d = imem_req_q;
    fetch_id_d = fetch_id_q;

    if (imem_req_issue) begin // only issue new request if previous request accepted, no request inflight and stage is not stalled/flushed
      imem_req_valid_d = 1'b1;

      imem_req_d.epoch = fetch_epoch_q;
      imem_req_d.id = fetch_id_q;
      imem_req_d.we = 1'b0;
      imem_req_d.addr = pc_next;
      imem_req_d.wdata = 32'd0;

      fetch_id_d = fetch_id_q + 'd1;
    end
  end

  always_comb begin
    imem_req_inflight_d = imem_req_inflight_q;
    if (imem_req_accepted && !imem_rsp_accepted) begin
      imem_req_inflight_d = 1'b1;
    end else if (!imem_req_accepted && imem_rsp_accepted) begin
      imem_req_inflight_d = 1'b0;
    end
  end

  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      imem_req_valid_q <= '0;
      imem_req_q <= '0;
      fetch_id_q <= '0;
      imem_req_inflight_q <= 1'b0;
    end else begin
      imem_req_valid_q <= imem_req_valid_d;
      imem_req_q <= imem_req_d;
      fetch_id_q <= fetch_id_d;
      imem_req_inflight_q <= imem_req_inflight_d;
    end
  end

  // IF to ID pipeline register
  if_id_t if_id_d, if_id_q;
  wire imem_epoch_match = imem_rsp_i.epoch == fetch_epoch_q;

  always_comb begin
    if_id_d = if_id_q;
    if (ctrl_if_i.flush_if_id) begin
      if_id_d = '0;
    end else if (ctrl_if_i.stall_bubble_if_id) begin
      if_id_d.valid = 1'b0;
    end else if (!ctrl_if_i.stall_hold_if_id) begin
      if (imem_rsp_valid_i && imem_epoch_match) begin
        if_id_d.valid = 1'b1;
        if_id_d.pc = pc_issued_q;
        if_id_d.instr = imem_rsp_i.rdata;
      end else begin
        if_id_d.valid = 1'b0; // bubble if memory not ready
      end
    end
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      if_id_q <= '0;
    end else begin
      if_id_q <= if_id_d;
    end
  end
  
  // Assign outputs to values
  assign imem_req_o = imem_req_q;
  assign imem_req_valid_o = imem_req_valid_q;
  assign imem_rsp_ready_o = !ctrl_if_i.stall_hold_if_id; // backpressure response whilst hold stalled

  assign if_id_o = if_id_q;

endmodule