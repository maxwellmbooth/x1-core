module stage_mem 
    import riscv_pkg::*, mem_pkg::*, core_pkg::*;
(
    input logic clk_i, rst_i,
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
    wire is_mem_op = ex_mem_i.ctrl_signals.mem_we || ex_mem_i.ctrl_signals.mem_re;
    
    // Data selection and forwarding
    logic [31:0] wdata;
    logic [3:0] be;

    always_comb begin
        // Memory write data selection
        unique case (ex_mem_i.ctrl_signals.store_op)
            STORE_INVALID: begin
                be = 'd0;
                wdata = 'd0;
            end
            STORE_BYTE: begin
                be = 4'b0001 << ex_mem_i.alu_q[1:0];
                wdata = {4{ex_mem_i.rs2_data[7:0]}};
            end
            STORE_HALF: begin
                be = 4'b0011 << ex_mem_i.alu_q[1:0];
                wdata = {2{ex_mem_i.rs2_data[15:0]}};
            end
            STORE_WORD: begin
                be = 4'b1111;
                wdata = ex_mem_i.rs2_data;
            end
            default: begin
                be = 'd0;
                wdata = 'd0;
            end
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
                info_mem_o.rd_data_fwd = load_format(dmem_rsp_i.rdata, ex_mem_i.alu_q[1:0], ex_mem_i.ctrl_signals.load_op);
            end
            RD_SEL_PC: begin 
                info_mem_o.rd_data_fwd = ex_mem_i.pc + 32'd4;
            end
            default: info_mem_o.rd_data_fwd = 32'd0;
        endcase
    end

    // DMEM request
    mem_req_t dmem_req;

    wire dmem_req_accepted = dmem_req_valid_o && dmem_req_ready_i; // DMEM request accepted this cycle
    wire dmem_rsp_accepted = dmem_rsp_valid_i && dmem_rsp_ready_o; // DMEM response accepted this cycle

    wire mem_access_done = !(ex_mem_i.valid && is_mem_op) || dmem_rsp_accepted;
    logic dmem_req_inflight_d, dmem_req_inflight_q;

    wire dmem_we = ex_mem_i.ctrl_signals.mem_we && ex_mem_i.valid;

    always_comb begin // can be combinational as it is not streaming and pipeline stage is registered
        dmem_req_valid_o = ex_mem_i.valid && is_mem_op && !dmem_req_inflight_q;
        dmem_req.epoch = 4'd0; // No IDs required for DMEM
        dmem_req.id = 4'd0;
        dmem_req.we = dmem_we;
        dmem_req.be = be;
        dmem_req.addr = ex_mem_i.alu_q;
        dmem_req.wdata = wdata;
    end

    always_comb begin
        dmem_req_inflight_d = dmem_req_inflight_q;

        if (dmem_rsp_accepted) begin
            dmem_req_inflight_d = 1'b0;
        end else if (dmem_req_accepted) begin
            dmem_req_inflight_d = 1'b1;
        end
    end

    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            dmem_req_inflight_q <= 1'b0;
        end else begin
            dmem_req_inflight_q <= dmem_req_inflight_d;
        end
    end

    // MEM to WB pipeline register
    always_comb begin
        mem_wb_d = mem_wb_q;
        ready_us_o = 1'b1;

        if (ready_ds_i) begin
            if (ctrl_mem_i.flush_mem_wb) begin
                mem_wb_d = '0;
            end else begin
                if (mem_access_done) begin
                    mem_wb_d.valid = ex_mem_i.valid;
                    mem_wb_d.instr = ex_mem_i.instr;
                    mem_wb_d.pc = ex_mem_i.pc;
                    mem_wb_d.ctrl_signals = ex_mem_i.ctrl_signals;
                    mem_wb_d.rd_addr = ex_mem_i.rd_addr;
                    mem_wb_d.imm = ex_mem_i.imm;
                    mem_wb_d.alu_q = ex_mem_i.alu_q;
                    mem_wb_d.mem_rdata = dmem_rsp_i.rdata;
                end else begin
                    mem_wb_d = '0; // bubble if memory not ready
                    ready_us_o = 1'b0;
                end
            end
        end else begin
            ready_us_o = 1'b0;
        end
    end
    
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            mem_wb_q <= '0;
        end else begin
            mem_wb_q <= mem_wb_d;
        end
    end

    assign info_mem_o.valid = ex_mem_i.valid && ex_mem_i.ctrl_signals.rd_we && mem_access_done; // assign valid for data forwarding
    assign dmem_req_o = dmem_req;
    assign dmem_rsp_ready_o = ready_ds_i; // backpressure response whilst hold stalled

    assign mem_wb_o = mem_wb_q;
    
endmodule