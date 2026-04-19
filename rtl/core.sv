import common_pkg::*;

module core (
  input logic clk_i, rst_i,
  input logic imem_rsp_valid_i,
  input logic imem_req_ready_i,
  input mem_rsp_t imem_rsp_i,
  input mem_rsp_t dmem_rsp_i,

  output logic imem_req_valid_o,
  output logic imem_rsp_ready_o,
  output mem_req_t imem_req_o,
  output mem_req_t dmem_req_o
);
  
  // Regfile instance
  logic [4:0] rs1_addr, rs2_addr, rd_addr;
  logic [XLEN-1:0] rd_data;
  logic rd_we;
  logic [XLEN-1:0] rs1_data, rs2_data;
  
  regfile regfile_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
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
  info_if_t info_if;
 
  stage_if stage_if_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .ctrl_if_i(ctrl_if),
    .imem_rsp_valid_i(imem_rsp_valid_i),
    .imem_req_ready_i(imem_req_ready_i),
    .imem_rsp_i(imem_rsp_i),
    .pc_redirect_i(pc_redirect),
    .imem_req_valid_o(imem_req_valid_o),
    .imem_rsp_ready_o(imem_rsp_ready_o),
    .imem_req_o(imem_req_o),
    .info_if_o(info_if),
    .if_id_o(if_id)
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
  
  stage_mem stage_mem_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .ctrl_mem_i(ctrl_mem),
    .ex_mem_i(ex_mem),
    .dmem_rsp_i(dmem_rsp_i),
    .dmem_req_o(dmem_req_o),
    .info_mem_o(info_mem),
    .mem_wb_o(mem_wb)
  );
  
  // WB stage instance
  info_wb_t info_wb;

  stage_wb stage_wb_inst (
    .clk(clk_i),
    .rst(rst_i),
    .mem_wb_i(mem_wb),
    .rd_addr_o(rd_addr),
    .rd_data_o(rd_data),
    .rd_we_o(rd_we),
    .info_wb_o(info_wb)
  );
  
  // Control logic
  assign ctrl_ex.rd_addr_mem_fwd = info_mem.rd_addr_fwd;
  assign ctrl_ex.rd_data_mem_fwd = info_mem.rd_data_fwd;
  assign ctrl_ex.mem_valid = info_mem.valid;

  assign ctrl_ex.rd_addr_wb_fwd = rd_addr;
  assign ctrl_ex.rd_data_wb_fwd = rd_data;
  assign ctrl_ex.wb_valid = info_wb.valid;

  always_comb begin
    ctrl_if.flush_if_id = 1'b0;
    ctrl_id.flush_id_ex = 1'b0;
    ctrl_ex.flush_ex_mem = 1'b0;
    ctrl_mem.flush_mem_wb = 1'b0;

    ctrl_if.stall_bubble_if_id = 1'b0;
    ctrl_id.stall_bubble_id_ex = 1'b0;

    ctrl_if.stall_hold_pc = 1'b0;
    ctrl_if.stall_hold_if_id = 1'b0;
    ctrl_id.stall_hold_id_ex = 1'b0;

    if (pc_redirect.valid) begin
      ctrl_if.flush_if_id = 1'b1;
      ctrl_id.flush_id_ex = 1'b1;
      ctrl_ex.flush_ex_mem = 1'b1;
    end

    if (info_id.load_use_hazard) begin
      ctrl_id.stall_bubble_id_ex = 1'b1;
      ctrl_if.stall_hold_pc = 1'b1;
      ctrl_if.stall_hold_if_id = 1'b1;
    end
  end
  
endmodule