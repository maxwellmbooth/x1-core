import common_pkg::*;

module core (
  input logic clk, rst,
  
  output logic [XLEN-1:0] pc
);
  
  // Core management
  flags_t flags;
  stall_types_t stall_types;
  
  // Regfile instance
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
  
  // PC branch redirect info
  pc_redirect_t pc_redirect;
 
  // IF stage instance
  if_id_t if_id;
  flags_t flags_if;
 
  stage_if stage_if_inst (
    .clk(clk),
    .rst(rst),
    .stall_if(stall_types.stall_if),
    .stall_id_type(stall_types.stall_id_type),
    .pc_redirect(pc_redirect),
    .flags(flags_if),
    .if_id(if_id),
    .pc_out(pc)
  );
  
  // ID stage instance
  id_ex_t id_ex;
  flags_t flags_id;

  stage_id stage_id_inst (
    .clk(clk),
    .rst(rst),
    .stall_ex_type(stall_types.stall_ex_type),
    .if_id(if_id),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .flags(flags_id),
    .id_ex(id_ex)
  );

  // EX stage instance
  ex_mem_t ex_mem;
  flags_t flags_ex;
  
  logic [4:0] rd_addr_mem_fwd; // RAW hazard value forwarding
  logic [XLEN-1:0] rd_data_mem_fwd;
  
  stage_ex stage_ex_inst (
    .clk(clk),
    .rst(rst),
    .stall_mem_type(stall_types.stall_mem_type),
    .rd_addr_mem_fwd(rd_addr_mem_fwd),
    .rd_addr_wb_fwd(rd_addr),
    .rd_data_mem_fwd(rd_data_mem_fwd),
    .rd_data_wb_fwd(rd_data),
    .id_ex(id_ex),
    .pc_redirect(pc_redirect),
    .flags(flags_ex),
    .ex_mem(ex_mem)
  );

  // MEM stage instance  
  mem_wb_t mem_wb;
  flags_t flags_mem;
  
  stage_mem stage_mem_inst (
    .clk(clk),
    .rst(rst),
    .stall_wb_type(stall_types.stall_wb_type),
    .ex_mem(ex_mem),
    .rd_addr_fwd(rd_addr_mem_fwd),
    .rd_data_fwd(rd_data_mem_fwd),
    .flags(flags_mem),
    .mem_wb(mem_wb)
  );
  
  // WB stage instance
  flags_t flags_wb;
  
  stage_wb stage_wb_inst (
    .clk(clk),
    .rst(rst),
    .mem_wb(mem_wb),
    .rd_addr(rd_addr),
    .rd_data(rd_data),
    .rd_we(rd_we),
    .flags(flags_wb)
  );
  
  always_comb begin
    flags.load_use_hazard = flags_if.load_use_hazard | flags_id.load_use_hazard | flags_ex.load_use_hazard | flags_mem.load_use_hazard | flags_wb.load_use_hazard;
  
    if (flags.load_use_hazard) begin
      stall_types = STALL_LOAD_USE;
    end else begin
      stall_types = '0;
    end
  end
  
endmodule