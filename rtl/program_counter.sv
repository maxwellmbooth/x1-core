import common_pkg::*;

module program_counter (
  input logic clk_i, rst_i,
  input logic pc_we_i,
  input pc_redirect_t pc_redirect_i,
  
  output logic [XLEN-1:0] pc_o
);
  
  logic [XLEN-1:0] pc_next;
  
  always_comb begin
    pc_next = pc_o + 'd4;
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      pc_o <= PC_RESET;
    end else if (pc_we_i) begin
      pc_o <= pc_redirect_i.valid ? pc_redirect_i.target : pc_next;
    end
  end
  
endmodule