import common_pkg::*;

module regfile (
  input logic clk, rst,
  input logic [4:0] rs1_addr, rs2_addr, rd_addr,
  input logic [XLEN-1:0] rd_data,
  input logic rd_we,
  
  output logic [XLEN-1:0] rs1_data, rs2_data
);
  
  logic [XLEN-1:0] regs [0:31];
  
  assign rs1_data = (rs1_addr == 5'd0) ? 'd0 : regs[rs1_addr];
  assign rs2_data = (rs2_addr == 5'd0) ? 'd0 : regs[rs2_addr];
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      for (int i = 0; i < 32; i++) begin
        regs[i] <= '0;
      end
    end else begin
      if (rd_we && (rd_addr != 5'd0)) begin
        regs[rd_addr] <= rd_data;
      end
    end
  end
  
endmodule