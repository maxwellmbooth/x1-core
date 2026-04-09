import common_pkg::*;

module program_counter (
  input logic clk_i, rst_i,
  input logic pc_we_i,
  input logic pc_next_i,
  
  output logic [XLEN-1:0] pc_o
);
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      pc_o <= PC_RESET;
    end else if (pc_we_i) begin
      pc_o <= pc_next_i;
    end
  end
  
endmodule