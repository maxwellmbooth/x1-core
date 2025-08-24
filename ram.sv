parameter int RAM_ADDR_WIDTH = 8;
parameter int RAM_DATA_WIDTH = 32;
parameter int RAM_DEPTH = 1 << RAM_ADDR_WIDTH;


module ram (
  input logic clk,
  input logic we,
  input logic [RAM_ADDR_WIDTH-1:0] addr,
  input logic [RAM_DATA_WIDTH-1:0] data_in,
  
  output logic [RAM_DATA_WIDTH-1:0] data_out
);

  logic [RAM_DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1];
  
  always_ff @(posedge clk) begin
    if (we) begin
      mem[addr] <= data_in;
      data_out <= data_in;
    end else begin
      data_out <= mem[addr];
    end
  end

endmodule