`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:53:32 10/27/2022 
// Design Name: 
// Module Name:    MUX 
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
module MUX4to1(
    input[1:0] SelOp,
    input[31:0] in0,
    input[31:0] in1,
    input[31:0] in2,
    input[31:0] in3,
    output[31:0] out
    );
assign out = (SelOp == 2'b00)? in0 : 
             (SelOp == 2'b01)? in1 : 
             (SelOp == 2'b10)? in2 : 
             (SelOp == 2'b11)? in3 :
             0;
endmodule

module MUX4to1_5(
    input[1:0] SelOp,
    input[4:0] in0,
    input[4:0] in1,
    input[4:0] in2,
    input[4:0] in3,
    output[4:0] out
    );
assign out = (SelOp == 2'b00)? in0 : 
             (SelOp == 2'b01)? in1 : 
             (SelOp == 2'b10)? in2 : 
             (SelOp == 2'b11)? in3 :
             0;
endmodule

module MUX2to1(
    input SelOp,
    input[31:0] in0,
    input[31:0] in1,
    output[31:0] out
    );
assign out = (SelOp == 0)? in0 : 
             (SelOp == 1)? in1 : 
             0;

endmodule

module MUX2to1_26(
    input SelOp,
    input[25:0] in0,
    input[25:0] in1,
    output[25:0] out
    );
assign out = (SelOp == 0)? in0 : 
             (SelOp == 1)? in1 : 
             0;
             
endmodule
