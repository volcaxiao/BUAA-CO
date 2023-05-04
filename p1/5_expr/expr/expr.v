`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:39 10/06/2022 
// Design Name: 
// Module Name:    expr 
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
`define s0 4'b0001
`define s_f 4'b0010
`define sn 4'b0100
`define sf 4'b1000

module expr(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
reg [3:0]status = `s0;
reg [7:0]reg_in;
assign out = (status == `sf)? 1 : 0;

always @(posedge clk , posedge clr) begin
    if(clr) begin
        status <= `s0;
    end
    else begin
        reg_in = ("0" <= in && in <= "9")? "1" :
                 (in == "+" || in == "*")? "+" :
                 0;
        case (status)
        `s0 : begin
                  status <= (reg_in == "+")? `sn :
                            (reg_in == "1")? `sf :
                            `sn;
              end
        `s_f : begin
                   status <= (reg_in == "+")? `sn :
                             (reg_in == "1")? `sf :
                             `sn;
               end
        `sf : begin
                  status <= (reg_in == "+")? `s_f :
                            (reg_in == "1")? `sn :
                            `sn;
              end
        endcase
    end
end
endmodule
