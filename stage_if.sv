import common_pkg::*;

module stage_if (
  input logic clk, rst,
  input logic pc_we,
  input pc_redirect_t pc_redirect,
  
  output if_id_t if_id
);

  logic [XLEN-1:0] pc;
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
    .addr(pc[7:0]),
    .data(instr)
  );

  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      if_id <= '0;
    end else begin
      if_id.pc <= pc;
      if_id.instr <= instr;
    end
  end
  
endmodule