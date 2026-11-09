module stage_wb 
    import riscv_pkg::*, core_pkg::*;
(
    input clk, rst,
    input mem_wb_t mem_wb_i,
    
    output logic [4:0] rd_addr_o,
    output logic [XLEN-1:0] rd_data_o,
    output logic rd_we_o,
    output logic ready_us_o
);

    assign rd_we_o = mem_wb_i.ctrl_signals.rd_we && mem_wb_i.valid;
    assign rd_addr_o = mem_wb_i.rd_addr;
    
    always_comb begin
        
        // Destination register input selection
        unique case (mem_wb_i.ctrl_signals.rd_sel)
            RD_SEL_ALU: rd_data_o = mem_wb_i.alu_q;
            RD_SEL_IMM: rd_data_o = mem_wb_i.imm;
            RD_SEL_MEM: rd_data_o = load_format(mem_wb_i.mem_rdata, mem_wb_i.alu_q[1:0], mem_wb_i.ctrl_signals.load_op);
            RD_SEL_PC: rd_data_o = mem_wb_i.pc + 32'd4;
            default: rd_data_o = 32'd0;
        endcase
    end

    assign ready_us_o = 1'b1;

endmodule