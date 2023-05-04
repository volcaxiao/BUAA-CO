`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:49:45 10/27/2022 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm16,
    input ExtOp,
    output [31:0] imm32
    );
assign imm32 = (ExtOp == 1'b0)? {16'b0000,imm16} : 
                (imm16[15] == 1'b1)? {16'hffff, imm16} : 
                (imm16[15] == 1'b0)? {16'h0000, imm16} : 
                0;

endmodule
