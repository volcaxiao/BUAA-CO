`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:15:36 10/05/2022
// Design Name:   alu
// Module Name:   /media/shared/p1/2_ALU/ALU/alu_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 32'h8000_00f1;
		B = 32'H0000_0004;
		ALUOp = 3'b000;
        #10 ALUOp = 3'b001;
        #10 ALUOp = 3'b010;
        #10 ALUOp = 3'b011;
        #10 ALUOp = 3'b100;
        #10 ALUOp = 3'b101;

		// Wait 100 ns for global reset to finish
		// Add stimulus here

	end
     
    initial begin
        #70 $finish;
    end
endmodule

