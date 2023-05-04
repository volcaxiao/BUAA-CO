`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:32 10/27/2022 
// Design Name: 
// Module Name:    NPC 
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
`define pc4 3'b000
`define beq 3'b001
`define j   3'b010
`define jal 3'b011
`define jr  3'b100
module NPC(
    input [31:0] PC,
    input [2:0] NPCOp,
    input [25:0] imm26,
    input [31:0] RA,
    input beqYes,
    output [31:0] NPC,
    output [31:0] PC4
    );
wire[31:0] Simm32;

assign Simm32 = { {4{imm26[25]}} , imm26, 2'b00};
assign PC4 = PC + 4;
assign NPC = (NPCOp == `pc4)? PC + 4 :
            (NPCOp == `beq && beqYes == 0)? PC + 4 :
            (NPCOp == `beq && beqYes == 1)? PC + 4 + Simm32 :
            (NPCOp == `j || NPCOp == `jal)? Simm32 :
            (NPCOp == `jr)? RA :
            PC + 4;

endmodule
