import common_pkg::*;

module program_counter (
  input logic clk, rst,
  input logic pc_we,
  input pc_redirect_t pc_redirect,
  
  output logic [XLEN-1:0] pc
);
  
  logic [XLEN-1:0] pc_next;
  
  always_comb begin
    pc_next = pc + 'd4;
  end
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      pc <= PC_RESET;
    end else if (pc_we) begin
      if (pc_redirect.valid) begin
        pc <= pc_redirect.target;
      end else begin
        pc <= pc_next;
      end
    end
  end
  
endmodule