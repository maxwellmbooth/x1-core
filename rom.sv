parameter int ROM_ADDR_WIDTH = 8;
parameter int ROM_DATA_WIDTH = 32;
parameter int ROM_DEPTH = 1 << ROM_ADDR_WIDTH;


module rom (
  input logic clk,
  input logic [ROM_ADDR_WIDTH-1:0] addr,
  
  output logic [ROM_DATA_WIDTH-1:0] data
);

  logic [ROM_DATA_WIDTH-1:0] mem [0:ROM_DEPTH-1];
  
  initial begin
    $readmemh("program.hex", mem);
  end
  
  always_ff @(posedge clk) begin
    data <= mem[addr];
  end

endmodule