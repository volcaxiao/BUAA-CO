`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:44 10/06/2022 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
    
reg [2:0] Count =  3'b000;
reg overTime = 1'b0;
assign Output = Count;
assign Overflow = overTime;
    


always @(posedge Clk) begin
    if(Count == 3'b100) begin
        overTime <= 1'b1;
    end
    if(En) begin
        Count <= (Count == 3'b000)? 3'b001 :
                 (Count == 3'b001)? 3'b011 :
                 (Count == 3'b011)? 3'b010 :
                 (Count == 3'b010)? 3'b110 :
                 (Count == 3'b110)? 3'b111 :
                 (Count == 3'b111)? 3'b101 :
                 (Count == 3'b101)? 3'b100 :
                 (Count == 3'b100)? 3'b000 :
                 3'b000;
    end
end
always @(posedge Clk) begin
    if(Reset) begin
        Count <= 3'b000;
        overTime <= 1'b0;
    end
end
endmodule
