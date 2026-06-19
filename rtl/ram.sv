parameter int RAM_ADDR_WIDTH = 16;
parameter int RAM_DATA_WIDTH = 32;
parameter int RAM_DEPTH = 1 << RAM_ADDR_WIDTH;

module ram (
    input logic clk_i,
    input logic mem_req_valid_i,
    input logic mem_rsp_ready_i,
    input mem_req_t mem_req_i,
    
    output logic mem_rsp_valid_o,
    output logic mem_req_ready_o,
    output mem_rsp_t mem_rsp_o
);

    logic [RAM_DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1] /* verilator public_flat_rd */;
    
    always_ff @(posedge clk_i) begin
        mem_rsp_valid_o <= mem_req_valid_i;

        mem_rsp_o.epoch <= mem_req_i.epoch;
        mem_rsp_o.id <= mem_req_i.id;
        mem_rsp_o.addr_invalid <= 1'b0;
        mem_rsp_o.rdata <= mem[mem_req_i.addr];
        
        if (mem_req_i.we && mem_req_valid_i) begin
            mem[mem_req_i.addr] <= mem_req_i.wdata;
        end
    end

    assign mem_req_ready_o = 1'b1;

endmodule