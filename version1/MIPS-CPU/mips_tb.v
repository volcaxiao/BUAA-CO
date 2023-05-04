`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:03:12 10/28/2022
// Design Name:   mips
// Module Name:   /media/shared/co_file/p4/version1/MIPS-CPU/mips_tb.v
// Project Name:  MIPS-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
        #10 reset = 0;
		// Add stimulus here
	end
    initial begin
        #500 $finish;
    end
    always #5 clk = ~clk;
endmodule

