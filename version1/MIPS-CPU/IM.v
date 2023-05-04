`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:37:27 10/27/2022 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] address,
    output [31:0] instruction
    );

reg [31:0] ROM[0:2047];
wire[31:0] loc = (address - 32'h00003000);

initial begin
    $readmemh("code.txt",ROM);
end

assign instruction = ROM[loc[11:2]];

endmodule
