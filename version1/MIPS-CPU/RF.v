`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:43:41 10/27/2022 
// Design Name: 
// Module Name:    RF 
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
module RF(
    input clk,
    input reset,
    input en,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input [31:0] WPC,
    output [31:0] RD1,
    output [31:0] RD2
    );
integer i;
reg[31:0] greg[0:31];
assign RD1 = greg[A1];
assign RD2 = greg[A2];

always @(posedge clk) begin 
    if(reset) begin
        for (i = 0; i < 32; i = i + 1) begin
            greg[i] <= 0;
        end
    end
    else if( en == 1'b1 && A3 !=5'b00000) begin
        greg[A3] <= (A3 == 0)? 0 : WD;
        $display("@%h: $%d <= %h",WPC, A3, WD);
    end
end

endmodule
