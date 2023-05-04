`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:08 10/27/2022 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );

wire[31:0] pc;                  //PC
wire[31:0] npc, pc4;            //NPC
wire[31:0] instruction;         //IM
wire [5:0]opcode, funct;
wire [4:0]rs, rt, rd, shamt;
wire [15:0]imm16;
wire [25:0]address;             //Splitter
wire[31:0] rd1, rd2;            //RF
wire [31:0]ALUout;
wire Zero;                      //ALU
wire[31:0] DMout;               //DM
wire[2:0] NPCOp, DMOp;
wire immExtOp, RFwe, DMwe, BSel;
wire[3:0] ALUOp;
wire[1:0] WRSel, RFWDSel;       //ctrl

//IFU
PC PC(
    .clk  (clk),
    .NPC  (npc),
    .reset(reset),
    .PC   (pc)
    );

wire[25:0] imm26;
MUX2to1_26 MUXimm26(
    .SelOp(NPCOp[1]),
    .in0  ({{10{imm16[15]}},imm16}),
    .in1  (address),
    .out  (imm26)
    );
NPC NPC(
    .PC   (pc),
    .NPCOp(NPCOp),
    .imm26 (imm26),
    .RA    (rd1),
    .beqYes(Zero),
    .NPC   (npc),
    .PC4   (pc4)
    );
//IM
IM IM(
    .address    (pc),
    .instruction(instruction)
    );
InstructionSplitter IS(
    .instruction(instruction),
    .opcode     (opcode),
    .rs         (rs),
    .rt         (rt),
    .rd         (rd),
    .shamt      (shamt),
    .funct      (funct),
    .address    (address),
    .imm16      (imm16)
    );
//RF
wire[4:0] wreg;
MUX4to1_5 MUXwreg(
    .SelOp(WRSel),
    .in0  (rt),
    .in1  (rd),
    .in2  (5'h1f),
    .out  (wreg)
    );
wire[31:0] wdata;
MUX4to1 MUXwdata(
    .SelOp(RFWDSel),
    .in0  (ALUout),
    .in1  (DMout),
    .in2  (pc4),
    .out  (wdata)
    );
RF RF(
    .clk  (clk),
    .reset(reset),
    .en   (RFwe),
    .A1   (rs),
    .A2   (rt),
    .A3   (wreg),
    .WD   (wdata),
    .RD1  (rd1),
    .RD2  (rd2),
    .WPC  (pc)
    );
//ALU
wire[31:0] imm32;
EXT EXTimm32(
    .ExtOp(immExtOp),
    .imm16(imm16),
    .imm32(imm32)
    );
wire[31:0] inB;
MUX2to1 MUXinB(
    .SelOp(BSel),
    .in0  (rd2),
    .in1  (imm32),
    .out  (inB)
    );
ALU ALU(
    .ALUOp (ALUOp),
    .A     (rd1),
    .B     (inB),
    .shamt (shamt),
    .result(ALUout),
    .Zero  (Zero)
    );
//DM
DM DM(
    .clk  (clk),
    .reset(reset),
    .A    (ALUout),
    .DMWE (DMwe),
    .WD   (rd2),
    .DMOp (DMOp),
    .out  (DMout),
    .WPC  (pc)
    );

ctrl ctrl(
    .opcode  (opcode),
    .funct   (funct),
    .NPCOp   (NPCOp),
    .RFWE    (RFwe),
    .WRSel   (WRSel),
    .RFWDSel (RFWDSel),
    .ALUOp   (ALUOp),
    .DMOp    (DMOp),
    .immExtOp(immExtOp),
    .BSel    (BSel),
    .DMWE    (DMwe)
    );

endmodule
