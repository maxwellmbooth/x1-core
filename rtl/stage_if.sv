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

  // Program counter
  logic [XLEN-1:0] pc_q;
  logic [XLEN-1:0] pc_issued_q;
  logic [XLEN-1:0] pc_addr_next;

  assign pc_addr_next = pc_redirect_i.valid? pc_redirect_i.target : pc_q;
  assign info_if_o.pc_redirect_ready = 1'b1;
  
  program_counter program_counter_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .pc_we_i(!ctrl_if_i.stall_hold_pc),
    .pc_redirect_i(pc_redirect_i),
    .pc_o(pc_q)
  );

  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      pc_issued_q <= '0;
    end else if (pc_redirect_i.valid || !ctrl_if_i.stall_hold_pc) begin
      pc_issued_q <= pc_addr_next;
    end
  end

  // Fetch request epoch/ID
  logic [3:0] fetch_epoch_q;
  logic [3:0] fetch_id_q;

  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      fetch_epoch_q <= '0;
      fetch_id_q <= '0;
    end else begin
      fetch_epoch_q <= pc_redirect_i.valid? fetch_epoch_q + 4'd1 : fetch_epoch_q;
      fetch_id_q <= fetch_id_q + 4'd1;
    end
  end

  // IMEM request
  mem_req_t imem_req_d, imem_req_q;
  assign info_if_o.imem_req_inflight = imem_req_q.valid && !imem_rsp_i.ready;

  always_comb begin
    imem_req_d = imem_req_q;
    if (!info_if_o.imem_req_inflight) begin
      if (ctrl_if_i.flush_if_id || ctrl_if_i.stall_bubble_if_id) begin
        imem_req_d = '0;
      end else if (!ctrl_if_i.stall_hold_if_id) begin
        imem_req_d.epoch = fetch_epoch_q;
        imem_req_d.id = fetch_id_q;
        imem_req_d.we = 1'b0;
        imem_req_d.addr = pc_addr_next;
        imem_req_d.wdata = 32'd0;
      end
    end
  end

  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      imem_req_q <= '0;
    end else begin
      imem_req_q <= imem_req_d;
    end
  end

  // IF to ID pipeline register
  if_id_t if_id_d, if_id_q;

  always_comb begin
    if_id_d = if_id_q;
    if (ctrl_if_i.flush_if_id) begin
      if_id_d = '0;
    end else if (ctrl_if_i.stall_bubble_if_id) begin
      if_id_d.valid = 1'b0;
    end else if (!ctrl_if_i.stall_hold_if_id && imem_rsp_i.valid) begin
      if_id_d.valid = 1'b1;
      if_id_d.pc = pc_issued_q;
      if_id_d.instr = imem_rsp_i.rdata;
    end
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      if_id_q <= '0;
    end else begin
      if_id_q <= if_id_d;
    end
  end
  
  assign imem_req_o = imem_req_q;
  assign if_id_o = if_id_q;

endmodule