import common_pkg::*;

module alu (
  input logic [XLEN-1:0] a,
  input logic [XLEN-1:0] b,
  input alu_op_t op,
  
  output logic [XLEN-1:0] q,
  output logic eq, lt, ltu
);
  
  assign eq = (a == b);
  assign lt = ($signed(a) < $signed(b));
  assign ltu = (a < b);
  
  always_comb begin
    unique case(op)
      ALU_INVALID: q = 'd0;
      ALU_ADD: q = a + b;
      ALU_SUB: q = a - b;
      ALU_SLT: q = lt? 'd1 : 'd0;
      ALU_SLTU: q = ltu? 'd1 : 'd0;
      ALU_SLL: q = a << b[4:0];
      ALU_SRL: q = a >> b[4:0];
      ALU_SRA: q = a >>> b[4:0];
      ALU_OR: q = a || b;
      ALU_XOR: q = a ^ b;
      ALU_AND: q = a && b;
    endcase
  end
  
  
endmodule