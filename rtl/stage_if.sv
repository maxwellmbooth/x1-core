import common_pkg::*;

module stage_if (
  input logic clk, rst,
  input ctrl_if_t ctrl_if,
  input pc_redirect_t pc_redirect,
  
  output flags_t flags,
  output if_id_t if_id,
  output logic [XLEN-1:0] pc_out
);
  
  if_id_t if_id_d, if_id_q;
  
  logic pc_we;
  assign pc_we = pc_redirect.valid || !ctrl_if.stall_if;
  
  logic [XLEN-1:0] pc;
  assign pc_out = pc;
  
  logic [31:0] instr;
  
  program_counter program_counter_inst (
    .clk(clk),
    .rst(rst),
    .pc_we(pc_we),
    .pc_redirect(pc_redirect),
    .pc(pc)
  );
  
  rom rom_inst (
    .clk(clk),
    .addr(pc[9:2]),
    .data(instr)
  );

  always_comb begin
    if (ctrl_if.flush_id) begin
      if_id.valid <= 1'b0;
    end else if (ctrl_if.stall_freeze_id) begin
      if_id <= if_id;
    end else begin
      if_id.valid <= 1'b1;
      if_id.pc <= pc;
      if_id.instr <= instr;
    end
  end
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      flags <= '0;
      if_id <= '0;
    end else if (ctrl_if.flush_id) begin
      if_id.valid <= 1'b0;
    end else if (ctrl_if.stall_freeze_id) begin
      if_id <= if_id;
    end else begin
      if_id.valid <= 1'b1;
      if_id.pc <= pc;
      if_id.instr <= instr;
    end
  end
  
endmodule