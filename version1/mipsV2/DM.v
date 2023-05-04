`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:48:24 10/27/2022 
// Design Name: 
// Module Name:    DM 
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
`define word 3'b000
`define byte 3'b001
`define byteu 3'b101
module DM(
    input DMWE,
    input [31:0] A,
    input [31:0] WD,
    input clk,
    input reset,
    input [31:0] WPC,
    input [2:0] DMOp,
    output [31:0] out
    );
integer i;
reg[31:0] RAM[0:2047];
wire [11:2] address;
wire [1:0] setByte;
wire [7:0] readByte;
wire [31:0] writeByte;

assign setByte = A[1:0];
assign readByte = (setByte == 2'b00)? RAM[address][7:0] : 
                   (setByte == 2'b01)? RAM[address][15:8] :
                   (setByte == 2'b10)? RAM[address][23:16] : 
                   (setByte == 2'b11)? RAM[address][31:24] :
                   0;
assign writeByte = (setByte == 2'b00)? {RAM[address][31:8],WD[7:0]} : 
                   (setByte == 2'b01)? {RAM[address][31:16],WD[7:0],RAM[address][7:0]} :
                   (setByte == 2'b10)? {RAM[address][31:24],WD[7:0],RAM[address][15:0]} : 
                   (setByte == 2'b11)? {WD[7:0],RAM[address][23:0]} :
                   0;
assign address = A[11:2];
assign out = (DMOp == `word)? RAM[address] :
             (DMOp == `byte)? {{24{RAM[address][7]}}, readByte} :
             (DMOp == `byteu)?{24'b0, readByte} :
             0;
always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 2048; i = i + 1) begin
            RAM[i] <= 0;
        end
    end
    else begin
        if (DMWE == 1) begin
            if (DMOp == `word) begin
                RAM[address] <= WD;
                $display("@%h: *%h <= %h",WPC, A, WD);
            end
            if (DMOp == `byte) begin
                RAM[address] <= writeByte;
            end
        end
    end
end

endmodule
