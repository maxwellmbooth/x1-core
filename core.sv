import common_pkg::*;

module core (
  input logic clk, rst,
  
  output logic [XLEN-1:0] pc
);
  
  logic [4:0] rs1_addr, rs2_addr, rd_addr;
  logic [XLEN-1:0] rd_data;
  logic rd_we;
  logic [XLEN-1:0] rs1_data, rs2_data;
  
  regfile regfile_inst (
    .clk(clk),
    .rst(rst),
    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .rd_addr(rd_addr),
    .rd_data(rd_data),
    .rd_we(rd_we),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
  );
  
  logic pc_we = 1'b1;
  pc_redirect_t pc_redirect;
  if_id_t if_id;
  
  stage_if stage_if_inst (
    .clk(clk),
    .rst(rst),
    .pc_we(pc_we),
    .pc_redirect(pc_redirect),
    .if_id(if_id)
  );
  
  id_ex_t id_ex;
  
  stage_id stage_id_inst (
    .clk(clk),
    .rst(rst),
    .if_id(if_id),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .id_ex(id_ex)
  );
  
  ex_mem_t ex_mem;
  
  stage_ex stage_ex_inst (
    .clk(clk),
    .rst(rst),
    .id_ex(id_ex),
    .pc_redirect(pc_redirect),
    .ex_mem(ex_mem)
  );
  
  mem_wb_t mem_wb;
  
  stage_mem stage_mem_inst (
    .clk(clk),
    .rst(rst),
    .ex_mem(ex_mem),
    .mem_wb(mem_wb)
  );
  
  stage_wb stage_wb_inst (
    .mem_wb(mem_wb),
    .rd_addr(rd_addr),
    .rd_data(rd_data),
    .rd_we(rd_we)
  );
  
  assign pc = if_id.pc;
  
endmodule