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
module DM(
    input DMWE,
    input [31:0] A,
    input [31:0] WD,
    input clk,
    input reset,
    input [31:0] WPC,
    output [31:0] out
    );
integer i;
reg[31:0] RAM[0:2047];
wire [11:2] address;

assign address = A[11:2];
assign out = RAM[address];
always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 2048; i = i + 1) begin
            RAM[i] <= 0;
        end
    end
    else begin
        if (DMWE == 1) begin
            RAM[address] <= WD;
            $display("@%h: *%h <= %h",WPC, A, WD);
        end
    end
end

endmodule
