import common_pkg::*;

module stage_if (
  input logic clk, rst,
  input logic stall_if,
  input stall_type_t stall_id_type,
  input pc_redirect_t pc_redirect,
  
  output flags_t flags,
  output if_id_t if_id,
  output logic [XLEN-1:0] pc_out
);
  
  logic pc_we;
  assign pc_we = !stall_if;
  
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

  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      flags <= '0;
      if_id <= '0;
    end else begin
      unique case (stall_id_type)
        STALL_FREEZE: begin
          if_id <= if_id;
        end
        STALL_NOP: begin
          if_id <= if_id; //CHANGE
        end
        STALL_FLUSH: begin
          if_id <= '0;
        end
        STALL_NONE: begin
          if_id.pc <= pc;
          if_id.instr <= instr;
        end
      endcase
    end
  end
  
endmodule