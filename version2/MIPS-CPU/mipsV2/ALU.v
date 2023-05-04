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
`define lui 4'b0100
`define sll 4'b0101
`define ras 4'b1000
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALUOp,
    input [4:0] shamt,
    output Zero,
    output [31:0] result
    );

wire [31:0] high;
wire [31:0] low;
reg bitNum;
wire [31:0] rasOut;

integer i = 0;
always @(*) begin
    bitNum = 0;
    for (i = 0; i < 32; i = i+1) begin
        bitNum = bitNum + B[i];
    end
end

assign high = (~(A >> (32 - bitNum))) << (32 - bitNum);
assign low = (A << bitNum) >> bitNum;
assign rasOut = (high + low) >> bitNum;


assign result = (ALUOp == `add)? A + B :
                (ALUOp == `sub)? A - B :
                (ALUOp == `ori)? A | B :
                (ALUOp == `slt)? ((A < B)? 1 : 0) :
                (ALUOp == `lui)? B << 5'h10 :
                (ALUOp == `sll)? B << shamt :
                (ALUOp == `ras)? rasOut :
                0;



assign Zero = (A == B)? 1'b1 : 1'b0;

endmodule
