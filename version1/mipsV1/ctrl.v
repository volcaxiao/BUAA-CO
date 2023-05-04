`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:05 10/27/2022 
// Design Name: 
// Module Name:    ctrl 
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
module ctrl(
    input [5:0] opcode,
    input [5:0] funct,
    output [2:0] NPCOp,
    output immExtOp,
    output RFWE,
    output DMWE,
    output [3:0] ALUOp,
    output [1:0] WRSel,
    output [1:0] RFWDSel,
    output BSel
    );
wire _add;
wire _sub;
wire _ori;
wire _slt;
wire _lw;
wire _sw;
wire _beq;
wire _j;
wire _jal;
wire _jr;
wire _lui;

assign _add = (opcode == 6'b000000 && funct == 6'b100000);
assign _sub = (opcode == 6'b000000 && funct == 6'b100010);
assign _ori = (opcode == 6'b001101);
assign _slt = (opcode == 6'b000000 && funct == 6'b101010);
assign _lw  = (opcode == 6'b100011);
assign _sw  = (opcode == 6'b101011);
assign _beq = (opcode == 6'b000100);
assign _j   = (opcode == 6'b000010);
assign _jal = (opcode == 6'b000011);
assign _jr  = (opcode == 6'b000000 && funct == 6'b001000);
assign _lui = (opcode == 6'b001111);

assign NPCOp[0] = _beq | _jal ;
assign NPCOp[1] = _j | _jal;
assign NPCOp[2] = _jr;

assign immExtOp = _lw | _sw;

assign RFWE = _add | _sub | _ori | _slt | _lw | _jal | _lui ;

assign ALUOp[0] = _sub | _slt | _sw ;
assign ALUOp[1] = _ori | _slt | _lui ;
assign ALUOp[2] = _lw | _sw | _lui;
assign ALUOp[3] = 0;

assign DMWE = _sw;

assign WRSel[0] = _add | _sub | _slt;
assign WRSel[1] = _jal ;

assign RFWDSel[0] = _lw;
assign RFWDSel[1] = _jal;

assign BSel = _ori | _lw | _sw | _lui;

endmodule
