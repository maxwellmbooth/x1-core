import common_pkg::*;

module regfile (
  input logic clk_i, rst_i,
  input logic [4:0] rs1_addr_i, rs2_addr_i, rd_addr_i,
  input logic [XLEN-1:0] rd_data_i,
  input logic rd_we_i,
  
  output logic [XLEN-1:0] rs1_data, rs2_data
);
  
  logic [XLEN-1:0] regs [0:31];
  
  assign rs1_data = (rs1_addr_i == 5'd0) ? 'd0 : regs[rs1_addr_i];
  assign rs2_data = (rs2_addr_i == 5'd0) ? 'd0 : regs[rs2_addr_i];
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      for (int i = 0; i < 32; i++) begin
        regs[i] <= '0;
      end
    end else begin
      if (rd_we_i && (rd_addr_i != 5'd0)) begin
        regs[rd_addr_i] <= rd_data_i;
      end
    end
  end
  
endmodule