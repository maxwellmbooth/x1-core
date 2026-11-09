parameter int RAM_ADDR_WIDTH = 16;
parameter int RAM_DATA_WIDTH = 32;
parameter int RAM_DEPTH = 1 << RAM_ADDR_WIDTH;

module ram 
    import mem_pkg::*;
(
    input logic clk_i, rst_i,
    input logic mem_req_valid_i,
    input logic mem_rsp_ready_i,
    input mem_req_t mem_req_i,
    
    output logic mem_rsp_valid_o,
    output logic mem_req_ready_o,
    output mem_rsp_t mem_rsp_o
);

    logic [RAM_DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1] /* verilator public_flat_rd */;
    
    wire rsp_stalled = mem_rsp_valid_o && !mem_rsp_ready_i;

    always_ff @(posedge clk_i) begin
        if (rst_i) begin
            mem_rsp_valid_o <= 1'b0;
        end else if (!rsp_stalled) begin
            mem_rsp_valid_o <= mem_req_valid_i;

            mem_rsp_o.epoch <= mem_req_i.epoch;
            mem_rsp_o.id <= mem_req_i.id;
            mem_rsp_o.addr_invalid <= 1'b0;
            mem_rsp_o.rdata <= mem[mem_req_i.addr[17:2]];
            
            if (mem_req_i.we && mem_req_valid_i) begin
                unique case (mem_req_i.be)
                    4'b0001: mem[mem_req_i.addr[17:2]][7:0] <= mem_req_i.wdata[7:0];
                    4'b0010: mem[mem_req_i.addr[17:2]][15:8] <= mem_req_i.wdata[15:8];
                    4'b0100: mem[mem_req_i.addr[17:2]][23:16] <= mem_req_i.wdata[23:16];
                    4'b1000: mem[mem_req_i.addr[17:2]][31:24] <= mem_req_i.wdata[31:24];
                    4'b0011: mem[mem_req_i.addr[17:2]][15:0] <= mem_req_i.wdata[15:0];
                    4'b1100: mem[mem_req_i.addr[17:2]][31:16] <= mem_req_i.wdata[31:16];
                    4'b1111: mem[mem_req_i.addr[17:2]] <= mem_req_i.wdata;
                    default: ;
                endcase
            end
        end
    end

    assign mem_req_ready_o = !rsp_stalled;

endmodule