import common_pkg::*;

module core (
  input logic clk_i, rst_i,
  
  output logic [XLEN-1:0] pc_o
);
  
  // Regfile instance
  logic [4:0] rs1_addr, rs2_addr, rd_addr;
  logic [XLEN-1:0] rd_data;
  logic rd_we;
  logic [XLEN-1:0] rs1_data, rs2_data;
  
  regfile regfile_inst (
    .clk(clk_i),
    .rst(rst_i),
    .rs1_addr_i(rs1_addr),
    .rs2_addr_i(rs2_addr),
    .rd_addr_i(rd_addr),
    .rd_data_i(rd_data),
    .rd_we_i(rd_we),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
  );
  
  // PC branch redirect info
  pc_redirect_t pc_redirect;
 
  // IF stage instance
  if_id_t if_id;
  ctrl_if_t ctrl_if;
 
  stage_if stage_if_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .ctrl_if_i(ctrl_if),
    .pc_redirect_i(pc_redirect),
    .if_id_o(if_id),
    .pc_o(pc_o)
  );
  
  // ID stage instance
  id_ex_t id_ex;
  ctrl_id_t ctrl_id;
  info_id_t info_id;

  stage_id stage_id_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .ctrl_id_i(ctrl_id),
    .if_id_i(if_id),
    .rs1_data_i(rs1_data),
    .rs2_data_i(rs2_data),
    .rs1_addr_o(rs1_addr),
    .rs2_addr_o(rs2_addr),
    .info_id_o(info_id),
    .id_ex_o(id_ex)
  );

  // EX stage instance
  ex_mem_t ex_mem;
  ctrl_ex_t ctrl_ex;
  
  stage_ex stage_ex_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .ctrl_ex_i(ctrl_ex),
    .id_ex_i(id_ex),
    .pc_redirect_o(pc_redirect),
    .ex_mem_o(ex_mem)
  );

  // MEM stage instance  
  mem_wb_t mem_wb;
  ctrl_mem_t ctrl_mem;
  info_mem_t info_mem;

  assign ctrl_ex.rd_addr_mem_fwd = info_mem.rd_addr_fwd;
  assign ctrl_ex.rd_data_mem_fwd = info_mem.rd_data_fwd;
  assign ctrl_ex.mem_valid = info_mem.valid;
  
  stage_mem stage_mem_inst (
    .clk(clk_i),
    .rst(rst_i),
    .ctrl_mem_i(ctrl_mem),
    .ex_mem_i(ex_mem),
    .info_mem_o(info_mem),
    .mem_wb_o(mem_wb)
  );
  
  // WB stage instance
  info_wb_t info_wb;

  assign ctrl_ex.rd_addr_wb_fwd = rd_addr;
  assign ctrl_ex.rd_data_wb_fwd = rd_data;
  assign ctrl_ex.wb_valid = info_wb.valid;

  stage_wb stage_wb_inst (
    .clk(clk_i),
    .rst(rst_i),
    .mem_wb_i(mem_wb),
    .rd_addr_o(rd_addr),
    .rd_data_o(rd_data),
    .rd_we_o(rd_we),
    .info_wb_o(info_wb)
  );
  
  always_comb begin
    if (info_id.load_use_hazard) begin
      ctrl_if.stall_if = 1'b1;
      ctrl_if.stall_hold_id = 1'b1;
      ctrl_id.stall_bubble_ex = 1'b1;
    end else begin
      ctrl_if.stall_if = 1'b0;
      ctrl_if.stall_hold_id = 1'b0;
      ctrl_id.stall_bubble_ex = 1'b0;
    end
  end
  
endmodule