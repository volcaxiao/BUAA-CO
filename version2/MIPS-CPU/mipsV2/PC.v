`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:33:24 10/27/2022 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
    input [31:0] NPC,
    output [31:0] PC
    );

reg [31:0] PCreg;
assign PC = PCreg;

always @(posedge clk) begin
    if(reset) begin
        PCreg <= 32'h00003000;
    end else begin
        PCreg <= NPC;
    end
end

endmodule
