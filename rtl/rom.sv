import mem_pkg::*;

parameter int ROM_ADDR_WIDTH = 16;
parameter int ROM_DATA_WIDTH = 32;
parameter int ROM_DEPTH = 1 << ROM_ADDR_WIDTH;


module rom #(parameter string HEX_FILE = "../prog.hex") (
  input logic clk_i,
  input logic mem_req_valid_i,
  input logic mem_rsp_ready_i,
  input mem_req_t mem_req_i,
  
  output logic mem_rsp_valid_o,
  output logic mem_req_ready_o,
  output mem_rsp_t mem_rsp_o
);

  logic [ROM_DATA_WIDTH-1:0] mem [0:ROM_DEPTH-1];
  
  initial begin
    $readmemh(HEX_FILE, mem);
  end
  
  always_ff @(posedge clk_i) begin
    mem_rsp_valid_o <= mem_req_valid_i;

    mem_rsp_o.epoch <= mem_req_i.epoch;
    mem_rsp_o.id <= mem_req_i.id;
    mem_rsp_o.addr_invalid <= 1'b0;
    mem_rsp_o.rdata <= mem[mem_req_i.addr[17:2]];
  end

  assign mem_req_ready_o = 1'b1;

endmodule