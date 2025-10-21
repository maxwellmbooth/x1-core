import common_pkg::*;

module stage_if (
  input logic clk_i, rst_i,
  input ctrl_if_t ctrl_if_i,
  input pc_redirect_t pc_redirect_i,

  output if_id_t if_id_o,
  output logic [XLEN-1:0] pc_o
);

  if_id_t if_id_d, if_id_q;
  
  logic [XLEN-1:0] pc;
  logic [XLEN-1:0] pc_issued_q;

  logic pc_issue;
  assign pc_issue = pc_redirect_i.valid || !ctrl_if_i.stall_if;

  logic [31:0] instr;
  
  program_counter program_counter_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .pc_we_i(pc_issue),
    .pc_redirect_i(pc_redirect_i),
    .pc_o(pc)
  );

  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      pc_issued_q <= '0;
    end else if (pc_issue) begin
      pc_issued_q <=  pc_redirect_i.valid? pc_redirect_i.target : pc;
    end
  end

  logic [31:0] rom_addr;
  assign rom_addr = {24'd0, pc_redirect_i.valid? pc_redirect_i.target[9:2] : pc[9:2]};

  rom rom_inst (
    .clk_i(clk_i),
    .re_i(pc_issue),
    .addr_i(rom_addr),
    .data_o(instr)
  );

  always_comb begin
    if_id_d = if_id_q;
    if (ctrl_if_i.flush_id) begin
      if_id_d = '0;
    end else if (pc_redirect_i.valid) begin
      if_id_d.valid = 1'b0;
      if_id_d.pc = pc_issued_q;
      if_id_d.instr = instr;
    end else if (!ctrl_if_i.stall_hold_id) begin
      if_id_d.valid = 1'b1;
      if_id_d.pc = pc_issued_q;
      if_id_d.instr = instr;
    end
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      if_id_q <= '0;
    end else begin
      if_id_q <= if_id_d;
    end
  end
  
  assign pc_o = pc;
  assign if_id_o = if_id_q;

endmodule