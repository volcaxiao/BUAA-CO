`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:28:07 10/06/2022
// Design Name:   expr
// Module Name:   /media/shared/p1/5_expr/expr/expr_tb.v
// Project Name:  expr
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: expr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module expr_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	expr uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = "1";
        #10 in = "+";
        #10 in = "2";
        #10 in = "*";
        #10 in = "3";
        #30 clr = 1;
        #10 clr <= 0;
        in <= "1";
        #10 in = "+";
        #10 in = "2";
        #10 in = "*";
        #10 in = "+";
		// Add stimulus here

	end
    initial begin
        #200 $finish;
    end
always #5 clk = ~clk;
endmodule

