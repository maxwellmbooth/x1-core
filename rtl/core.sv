module core 
    import riscv_pkg::*, mem_pkg::*, core_pkg::*;
(
    input logic clk_i, rst_i,
    input logic imem_rsp_valid_i,
    input logic imem_req_ready_i,
    input mem_rsp_t imem_rsp_i,
    input logic dmem_rsp_valid_i,
    input logic dmem_req_ready_i,
    input mem_rsp_t dmem_rsp_i,

    output logic imem_req_valid_o,
    output logic imem_rsp_ready_o,
    output mem_req_t imem_req_o,
    output logic dmem_req_valid_o,
    output logic dmem_rsp_ready_o,
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
        .rs1_data_o(rs1_data),
        .rs2_data_o(rs2_data)
    );
    
    // PC branch redirect info
    pc_redirect_t pc_redirect;
 
    // IF stage instance
    if_id_t if_id;
    ctrl_if_t ctrl_if;
    logic id_ready_us;
 
    stage_if stage_if_inst (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .ctrl_if_i(ctrl_if),
        .ready_ds_i(id_ready_us),
        .imem_rsp_valid_i(imem_rsp_valid_i),
        .imem_req_ready_i(imem_req_ready_i),
        .imem_rsp_i(imem_rsp_i),
        .pc_redirect_i(pc_redirect),
        .imem_req_valid_o(imem_req_valid_o),
        .imem_rsp_ready_o(imem_rsp_ready_o),
        .imem_req_o(imem_req_o),
        .if_id_o(if_id)
    );
    
    // ID stage instance
    id_ex_t id_ex;
    ctrl_id_t ctrl_id;
    logic ex_ready_us;

    logic [XLEN-1:0] rs1_data_fwd, rs2_data_fwd;

    stage_id stage_id_inst (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .ctrl_id_i(ctrl_id),
        .if_id_i(if_id),
        .ready_ds_i(ex_ready_us),
        .rs1_data_i(rs1_data),
        .rs2_data_i(rs2_data),
        .rs1_data_fwd_i(rs1_data_fwd),
        .rs2_data_fwd_i(rs2_data_fwd),
        .rs1_addr_o(rs1_addr),
        .rs2_addr_o(rs2_addr),
        .ready_us_o(id_ready_us),
        .id_ex_o(id_ex)
    );

    // EX stage instance
    ex_mem_t ex_mem;
    ctrl_ex_t ctrl_ex;
    logic mem_ready_us;
    
    stage_ex stage_ex_inst (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .ctrl_ex_i(ctrl_ex),
        .id_ex_i(id_ex),
        .ready_ds_i(mem_ready_us),
        .rs1_data_fwd_i(rs1_data_fwd),
        .rs2_data_fwd_i(rs2_data_fwd),
        .pc_redirect_o(pc_redirect),
        .ready_us_o(ex_ready_us),
        .ex_mem_o(ex_mem)
    );

    // MEM stage instance  
    mem_wb_t mem_wb;
    ctrl_mem_t ctrl_mem;
    info_mem_t info_mem;
    logic wb_ready_us;
    
    stage_mem stage_mem_inst (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .ctrl_mem_i(ctrl_mem),
        .ex_mem_i(ex_mem),
        .ready_ds_i(wb_ready_us),
        .dmem_rsp_valid_i(dmem_rsp_valid_i),
        .dmem_req_ready_i(dmem_req_ready_i),
        .dmem_rsp_i(dmem_rsp_i),
        .dmem_req_valid_o(dmem_req_valid_o),
        .dmem_rsp_ready_o(dmem_rsp_ready_o),
        .dmem_req_o(dmem_req_o),
        .ready_us_o(mem_ready_us),
        .info_mem_o(info_mem),
        .mem_wb_o(mem_wb)
    );
    
    // WB stage instance
    stage_wb stage_wb_inst (
        .clk(clk_i),
        .rst(rst_i),
        .mem_wb_i(mem_wb),
        .rd_addr_o(rd_addr),
        .rd_data_o(rd_data),
        .rd_we_o(rd_we),
        .ready_us_o(wb_ready_us)
    );

    // Load-use hazard
    always_comb begin
        ctrl_id.load_use_hazard = 1'b0;
        if (id_ex.valid && id_ex.ctrl_signals.mem_re && ((rs1_addr == id_ex.rd_addr) || (rs2_addr == id_ex.rd_addr)) && (id_ex.rd_addr != 5'd0)) begin
            ctrl_id.load_use_hazard = 1'b1;
        end
    end

    // Data forwarding
    wire mem_fwd_valid = info_mem.valid && (info_mem.rd_addr_fwd != 5'd0);
    wire wb_fwd_valid = rd_we && (rd_addr != 5'd0);

    always_comb begin
        // Data forwarding from MEM/WB for rs1/rs2
        if (info_mem.rd_addr_fwd == id_ex.rs1_addr && mem_fwd_valid) begin
            rs1_data_fwd = info_mem.rd_data_fwd;
        end else if (rd_addr == id_ex.rs1_addr && wb_fwd_valid) begin
            rs1_data_fwd = rd_data;
        end else begin 
            rs1_data_fwd = id_ex.rs1_data;
        end
        
        if (info_mem.rd_addr_fwd == id_ex.rs2_addr && mem_fwd_valid) begin
            rs2_data_fwd = info_mem.rd_data_fwd;
        end else if (rd_addr == id_ex.rs2_addr && wb_fwd_valid) begin
            rs2_data_fwd = rd_data;
        end else begin
            rs2_data_fwd = id_ex.rs2_data;
        end
    end

    // Flush on PC redirect
    always_comb begin
        ctrl_if.flush_if_id = 1'b0;
        ctrl_id.flush_id_ex = 1'b0;
        ctrl_ex.flush_ex_mem = 1'b0;
        ctrl_mem.flush_mem_wb = 1'b0;

        if (pc_redirect.valid) begin
            ctrl_if.flush_if_id = 1'b1;
            ctrl_id.flush_id_ex = 1'b1;
            ctrl_ex.flush_ex_mem = 1'b1;
        end
    end
    
endmodule