import common_pkg::*;

parameter int RAM_ADDR_WIDTH = 8;
parameter int RAM_DATA_WIDTH = 32;
parameter int RAM_DEPTH = 1 << RAM_ADDR_WIDTH;


module ram (
  input logic clk_i,
  input mem_req_t mem_req_i,
  output mem_rsp_t mem_rsp_o
);

  logic [RAM_DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1];
  
  always_ff @(posedge clk_i) begin
    if (mem_req_i.we) begin
      mem[mem_req_i.addr] <= mem_req_i.wdata;

      mem_rsp_o.valid <= 1'b1;
      mem_rsp_o.ready <= 1'b1;
      mem_rsp_o.addr_invalid <= 1'b0;
      mem_rsp_o.rdata <= mem_req_i.wdata;
    end else begin
      mem_rsp_o.valid <= 1'b1;
      mem_rsp_o.ready <= 1'b1;
      mem_rsp_o.addr_invalid <= 1'b0;
      mem_rsp_o.rdata <= mem[mem_req_i.addr[17:2]];
    end
  end

endmodule