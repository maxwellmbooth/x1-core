import common_pkg::*;

module alu (
  input logic [XLEN-1:0] a_i,
  input logic [XLEN-1:0] b_i,
  input alu_op_t op_i,
  
  output logic [XLEN-1:0] q_o,
  output logic eq_o, lt_o, ltu_o
);
  
  assign eq_o = (a_i == b_i);
  assign lt_o = ($signed(a_i) < $signed(b_i));
  assign ltu_o = (a_i < b_i);
  
  always_comb begin
    unique case(op_i)
      ALU_INVALID: q_o = 'd0;
      ALU_ADD: q_o = a_i + b_i;
      ALU_SUB: q_o = a_i - b_i;
      ALU_SLT: q_o = lt_o? 'd1 : 'd0;
      ALU_SLTU: q_o = ltu_o? 'd1 : 'd0;
      ALU_SLL: q_o = a_i << b_i[4:0];
      ALU_SRL: q_o = a_i >> b_i[4:0];
      ALU_SRA: q_o = a_i >>> b_i[4:0];
      ALU_OR: q_o = a_i || b_i;
      ALU_XOR: q_o = a_i ^ b_i;
      ALU_AND: q_o = a_i && b_i;
      default: q_o = 32'd0;
    endcase
  end
  
  
endmodule