`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:15:41 10/10/2022 
// Design Name: 
// Module Name:    BlockChecker 
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
/*
32'h00..:初始状输出为1，
32'h_n:代表匹配到了n个begin
32'hff..:代表end在begin前
*/
`define s0 32'h0000_0000
`define sn 32'hffff_ffff
`define sno 32'hffff_fffe
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );
reg [7*8-1:0] str = 56'h0000_0000_0000_00;
integer cnt = 0;
reg [31:0]status = `s0;

assign result = (status == `s0)? 1 : 0;

always @(posedge clk , posedge reset) begin
    if(reset) begin
        cnt <= 0;
        str <= 56'h0000_0000_0000_00;
        status <= `s0;
    end
    else begin
        if(in == " ") begin
            cnt <= 0;
            str <= 56'h0000_0000_0000_00;
            if(status == `sn)
            status <= `sno;
        end
        else begin
            if(cnt <= 6) begin
                str <= {str[47:0],("A"<=in&&in<="Z")?in-"A"+"a":in};
                cnt <= cnt +1;
                if({str[47:0],("A"<=in&&in<="Z")?in-"A"+"a":in} == "begin") begin
                    if(status != `sn && status != `sno)
                    status <= status + 1;
                end
                else if({str[47:0],("A"<=in&&in<="Z")?in-"A"+"a":in} == "end") begin
                    if(status != `sn && status != `sno)
                    status <= status - 1;
                end
                else if(str == "begin") begin
                    if(status != `sno)
                    status <= status - 1;
                end
                else if(str == "end") begin
                    if(status != `sno)
                    status <= status + 1;
                end
            end
        end
        
    end
    
end


endmodule
