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
    output [2:0] DMOp,
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
wire _lb;
wire _lbu;
wire _sb;
wire _sll;

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
assign _lb  = (opcode == 6'b100000);
assign _lbu = (opcode == 6'b100100);
assign _sb  = (opcode == 6'b101000);
assign _sll = (opcode == 6'b000000 && funct == 6'b000000);
assign _ras = (opcode == 6'b101010);

assign NPCOp[0] = _beq | _jal ;
assign NPCOp[1] = _j | _jal;
assign NPCOp[2] = _jr;

assign immExtOp = _lw | _sw | _lb | _lbu | _sb ;

assign RFWE = _add | _sub | _ori | _slt | _lw | _jal | _lui | _lb | _lbu | _sll | _ras;

assign ALUOp[0] = _sub | _slt | _sll;
assign ALUOp[1] = _ori | _slt ;
assign ALUOp[2] = _lui | _sll ;
assign ALUOp[3] = _ras;

assign DMWE = _sw | _sb;

assign WRSel[0] = _add | _sub | _slt | _sll;
assign WRSel[1] = _jal ;

assign RFWDSel[0] = _lw | _lb | _lbu ;
assign RFWDSel[1] = _jal;

assign BSel = _ori | _lw | _sw | _lui | _lb | _lbu | _sb | _ras;

assign DMOp[0] = _lbu | _lb | _sb;
assign DMOp[1] = 0;
assign DMOp[2] = _lbu;

endmodule
