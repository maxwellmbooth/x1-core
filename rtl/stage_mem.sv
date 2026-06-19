import core_pkg::*;

module stage_mem (
    input clk_i, rst_i,
    input ctrl_mem_t ctrl_mem_i,
    input ex_mem_t ex_mem_i,
    input logic ready_ds_i,
    input logic dmem_rsp_valid_i,
    input logic dmem_req_ready_i,
    input mem_rsp_t dmem_rsp_i,

    output logic dmem_req_valid_o,
    output logic dmem_rsp_ready_o,
    output mem_req_t dmem_req_o,
    output logic ready_us_o,
    output info_mem_t info_mem_o,
    output mem_wb_t mem_wb_o
);
    
    mem_wb_t mem_wb_d, mem_wb_q;
    
    // Data selection and forwarding
    wire [31:0] wdata;

    always_comb begin
        // Memory write data selection
        unique case (ex_mem_i.ctrl_signals.store_op)
            STORE_INVALID: wdata = 'd0;
            STORE_BYTE: wdata = {24'd0, ex_mem_i.rs2_data[7:0]};
            STORE_HALF: wdata = {16'd0, ex_mem_i.rs2_data[15:0]};
            STORE_WORD: wdata = ex_mem_i.rs2_data;
            default: wdata = 'd0;
        endcase

        // RD data selection for forwarding and stall
        info_mem_o.rd_addr_fwd = ex_mem_i.rd_addr;
        unique case (ex_mem_i.ctrl_signals.rd_sel)
            RD_SEL_ALU: begin
                info_mem_o.rd_data_fwd = ex_mem_i.alu_q;
            end
            RD_SEL_IMM: begin
                info_mem_o.rd_data_fwd = ex_mem_i.imm;
            end
            RD_SEL_MEM: begin
                info_mem_o.rd_data_fwd = 32'd0;
            end
            RD_SEL_PC: begin 
                info_mem_o.rd_data_fwd = ex_mem_i.pc;
            end
            default: info_mem_o.rd_data_fwd = 32'd0;
        endcase
    end

    // DMEM request
    mem_req_t dmem_req_d, dmem_req_q;

    wire dmem_req_accepted = dmem_req_valid_o && dmem_req_ready_i; // DMEM request accepted this cycle
    wire dmem_rsp_accepted = dmem_rsp_valid_i && dmem_rsp_ready_o; // DMEM response accepted this cycle

    logic dmem_req_valid_d, dmem_req_valid_q;
    logic dmem_req_inflight_d, dmem_req_inflight_q;

    wire dmem_req_has_space = !dmem_req_inflight_q || dmem_rsp_accepted;
    wire dmem_req_issue = (!dmem_req_valid_q || dmem_req_accepted) && dmem_req_has_space && (!ctrl_mem_i.flush_mem_wb);

    wire dmem_we = ex_mem_i.ctrl_signals.mem_we && ex_mem_i.valid;

    assign info_mem_o.dmem_req_inflight = dmem_req_inflight_q;
    assign info_mem_o.dmem_rsp_accepted = dmem_rsp_accepted;

    always_comb begin
        dmem_req_valid_d = dmem_req_accepted? 1'b0 : dmem_req_valid_q; // Will make invalid if already accepted or hold otherwise
        dmem_req_d = dmem_req_q;
        fetch_id_d = fetch_id_q;

        if (dmem_req_issue) begin // Only issue new request if previous request accepted, no request inflight and stage is not stalled/flushed
            dmem_req_valid_d = 1'b1;

            dmem_req_d.epoch = 4'd0; // No IDs required for DMEM
            dmem_req_d.id = 4'd0;
            
            dmem_req_d.we = dmem_we;
            dmem_req_d.addr = ex_mem_i.alu_q;
            dmem_req_d.wdata = wdata;
        end
    end

    always_comb begin
        dmem_req_inflight_d = dmem_req_inflight_q;
        if (dmem_req_accepted && !dmem_rsp_accepted) begin
            dmem_req_inflight_d = 1'b1;
        end else if (!dmem_req_accepted && dmem_rsp_accepted) begin
            dmem_req_inflight_d = 1'b0;
        end
    end

    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            dmem_req_valid_q <= '0;
            dmem_req_q <= '0;
            dmem_req_inflight_q <= 1'b0;
        end else begin
            dmem_req_valid_q <= dmem_req_valid_d;
            dmem_req_q <= dmem_req_d;
            dmem_req_inflight_q <= dmem_req_inflight_d;
        end
    end

    // MEM to WB pipeline register
    always_comb begin
        mem_wb_d = mem_wb_q;
        if (ctrl_mem_i.flush_mem_wb) begin
            mem_wb_d = '0;
        end else if (!ctrl_mem_i.stall_hold_mem_wb) begin
            if (dmem_rsp_accepted) begin
                mem_wb_d.valid = ex_mem_i.valid;
                mem_wb_d.instr = ex_mem_i.instr;
                mem_wb_d.pc = ex_mem_i.pc;
                mem_wb_d.ctrl_signals = ex_mem_i.ctrl_signals;
                mem_wb_d.rd_addr = ex_mem_i.rd_addr;
                mem_wb_d.imm = ex_mem_i.imm;
                mem_wb_d.alu_q = ex_mem_i.alu_q;
                mem_wb_d.mem_data = dmem_rsp_i.rdata;
            end else begin
                mem_wb_d = '0; // bubble if memory not ready
            end
        end
    end
    
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            mem_wb_q <= '0;
        end else begin
            mem_wb_q <= mem_wb_d;
        end
    end

    assign info_mem_o.valid = ex_mem_i.valid;
    assign dmem_req_o = dmem_req_q;

    assign mem_wb_o = mem_wb_q;
    
endmodule