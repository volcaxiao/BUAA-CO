`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:45:11 10/27/2022 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define add 4'b0000
`define sub 4'b0001
`define ori 4'b0010
`define slt 4'b0011
`define lw  4'b0100
`define sw  4'b0101
`define lui 4'b0110
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALUOp,
    output Zero,
    output [31:0] result
    );
assign result = (ALUOp == `add)? A + B :
                (ALUOp == `sub)? A - B :
                (ALUOp == `ori)? A | B :
                (ALUOp == `slt)? ((A < B)? 1 : 0) :
                (ALUOp == `lw)?  A + B : 
                (ALUOp == `sw)?  A + B : 
                (ALUOp == `lui)? B << 5'h10 : 
                0;
assign Zero = (A == B)? 1'b1 : 1'b0;

endmodule
