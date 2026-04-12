`timescale 1ns/1ps

module top_tb;
  
  logic clk, rst;
  
  top x1_inst (
    .clk_i(clk),
    .rst_i(rst)
  );
  
  initial begin
    clk = 1'b0;
    
    #5 rst = 1'b1;
    #5 rst = 1'b0;
    
    repeat(100) begin
      #5 clk = 1'b1;
      #5 clk = 1'b0;
    end
    
    //add assert and property statements

    $stop;
  end
  
endmodule