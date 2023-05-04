`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:53:01 10/06/2022
// Design Name:   ext
// Module Name:   /media/shared/p1/3_EXT/EXT/ext_tb.v
// Project Name:  EXT
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ext_tb;

	// Inputs
	reg [15:0] imm;
	reg [1:0] EOp;

	// Outputs
	wire [31:0] ext;

	// Instantiate the Unit Under Test (UUT)
	ext uut (
		.imm(imm), 
		.EOp(EOp), 
		.ext(ext)
	);

	initial begin
		// Initialize Inputs
		imm = 16'h01f2;
		EOp = 2'b00;
        #10 EOp = 2'b01;
        #10 EOp = 2'b10;
        #10 EOp = 2'b11;
        

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
    initial begin
        #100 $finish;
    end
endmodule

