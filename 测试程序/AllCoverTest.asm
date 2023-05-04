#ori
ori		$t0, $0, 1
ori		$t0, $0, -1
ori		$t0, $0, 2147483647
ori		$t1, $t0, -2147483647
ori		$t0, $0, 1
#add
add 	$t1, $t1,$t0
ori		$t2, $0, -2
add		$t2, $t1, $t2
ori		$t3, $0, ?1000786109
add		$t3, $0, $t3
#sub
ori		$s0, $0, 

#calculate
  .data
a0:   .word  1312790913
a1:   .word  -735115427
a2:   .word  -879199915
a3:   .word  1512039151
a4:   .word  -2013377222
a5:   .word  -1905462880
a6:   .word  1727785544
a7:   .word  495505030
a8:   .word  -908018362
a9:   .word  -872011691
a10:   .word  -688762757
a11:   .word  -584970043
a12:   .word  -771638002
a13:   .word  1758026820
a14:   .word  -1511157661
a15:   .word  1960163833
a16:   .word  544909545
a17:   .word  -927301894
a18:   .word  -1007746847
a19:   .word  -1635999615
a20:   .word  873288396
a21:   .word  185826422
a22:   .word  804499640
a23:   .word  1264829813
a24:   .word  1861578073
a25:   .word  -1064488967
a26:   .word  1910898200
a27:   .word  2116088717
a28:   .word  300923572
a29:   .word  -2026048648
a30:   .word  130284251
a31:   .word  -1794474076
.text
li $0, a0
li $1, a1
li $2, a2
li $3, a3
li $4, a4
lw $5, a5
lw $6, a6
lw $7, a7
lw $8, a8
lw $9, a9
lw $10, a10
lw $11, a11
lw $12, a12
lw $13, a13
lw $14, a14
lw $15, a15
lw $16, a16
lw $17, a17
lw $18, a18
lw $19, a19
lw $20, a20
lw $21, a21
lw $22, a22
lw $23, a23
lw $24, a24
lw $25, a25
lw $26, a26
lw $27, a27
lw $28, a28
lw $29, a29
lw $30, a30
lw $31, a31
add $22, $14, $28
nor $8, $17, $29
addu $19, $8, $4
srlv $3, $11, $16
sub $1, $20, $10
add $15, $25, $6
nor $18, $24, $12
or $25, $27, $18
and $4, $30, $4
or $24, $10, $5
or $23, $14, $22
and $21, $24, $29
or $7, $13, $21
sllv $24, $25, $19
xor $16, $31, $7
srlv $16, $5, $1
or $23, $7, $17
and $30, $16, $25
sltu $0, $4, $14
addu $1, $10, $30
sllv $31, $10, $12
srav $1, $10, $25
xor $20, $15, $9
sltu $23, $8, $24
and $17, $22, $0
xor $7, $24, $4
slt $20, $13, $17
xor $7, $3, $21
srav $12, $29, $11
addu $1, $27, $16
sltu $16, $2, $29
subu $15, $11, $21
srav $27, $10, $2
add $18, $31, $24
sltu $22, $6, $31
srlv $3, $28, $0
or $10, $4, $6
sllv $30, $15, $26
add $1, $19, $18
srlv $15, $28, $13
or $25, $10, $31
add $2, $13, $2
and $1, $24, $26
addu $19, $23, $20
xor $30, $3, $28
xor $14, $27, $28
and $4, $16, $25
nor $26, $23, $4
add $4, $11, $29
srlv $30, $3, $2
add $11, $28, $27
sltu $6, $28, $23

#jump
main:	
li	$s0, 0
li	$s1, -1000
li	$s2, 1000
lui	$s3, 0x8000	#s3 is  -2147483648
lui	$s4, 0x8000
ori	$s4, 0x0001	#s4 is  -2147483647
lui	$s5, 0x7fff
ori	$s5, 0xffff	#s5 is  2147483647
lui	$s6, 0x7fff
ori	$s6, 0xfffe	#s6 is 2147483646


beq_1:	beq	$s0, $s0, beq_1_test
beq_2:	beq	$s1, $s1, beq_2_test
����
beq_10:  beq	$s5, $s6, beq_10_test
beq_end:

bne_1:	bne	$s0, $s1, bne_1_test
����
bne_10:	bne	$s3, $s3, bne_10_test
bne_end:

blez_1: blez	$s0, blez_1_test
����
blez_10: blez	$s6, blez_10_test
blez_end:

bgtz_1:	 bgtz	$s2,bgtz_1_test
����
bgtz_10: bgtz	$s1,bgtz_10_test
bgtz_end:

jal_1:	jal	jal_1_test
����
jal_5:	jal	jal_5_test
jal_end:

jalr_1:	or	$v0, $0, 12916
	jalr	$v1, $v0
����
jalr_5:	or	$v0, $0, 12948
	jalr	$v1, $v0

sw	$t0, 0($s0)
sw	$t1, 0($s0)
sw	$t2, 0($s0)
sw	$t3, 0($s0)
sw	$t4, 0($s0)
sw	$t5, 0($s0)
li	$v0, 10
syscall
	
beq_1_test: addi	$t0,$t0, 1
	   j	beq_2
����
beq_10_test: addi	$t0,$t0, 1
	   j	beq_end

bne_1_test: addi	$t1,$t1, 1
	   j	bne_2
����
bne_10_test:addi	$t1,$t1, 1
	   j	bne_end  	      	      	   

blez_1_test:	addi	$t2,$t2, 1
		j	blez_2
����
blez_10_test:	addi	$t2,$t2, 1
		j	blez_end

bgtz_1_test:	addi	$t3,$t3 1
		j	bgtz_2
����
bgtz_10_test:	addi	$t3,$t3 1
		j	bgtz_end
		
jal_1_test:	addi	$t4, $4, 1
		jr	$ra
����
jal_5_test:	addi	$t4, $4, 1
		jr	$ra

jalr_1_test:	addi	$t5, $t5, 1
		jr	$v1
����
jalr_5_test:	addi	$t5, $t5, 1
		jr	$v1

#memory
.text

li	$s0, 0xABCF1234
li	$s1, 0x1234ABCD
li	$s2, 0xa1b2c3d4
li	$s3, 0x7fff0000

sb	$s1, 100($0)
sb	$s2, 103($0)
sb	$s3, 105($0)
sb	$s4, 107($0)
sh	$s4, 108($0)
sh	$s3, 110($0)
sh	$s2, 112($0)
sh	$s1, 114($0)
sw	$s0, 0($0)
sw	$s1, 4($0)
sw	$s2, 8($0)
sw	$s3, 12($0)
lw	$t0, 0($0)
lw	$t1, 4($0)
lw	$t2, 8($0)
lw	$t3, 12($0)
sw	$t0, 16($0)
sw	$t1, 20($0)
sw	$t2, 24($0)
sw	$t3, 28($0)
lb	$t0, 3($0)
lb	$t1, 7($0)
lb	$t2, 11($0)
lb	$t3, 13($0)
sw	$t0, 32($0)
sw	$t1, 36($0)
sw	$t2, 40($0)
sw	$t3, 44($0)
lbu	$t0, 3($0)
lbu	$t1, 7($0)
lbu	$t2, 11($0)
lbu	$t3, 13($0)
sw	$t0, 48($0)
sw	$t1, 52($0)
sw	$t2, 56($0)
sw	$t3, 60($0)
lh	$t0, 2($0)
lh	$t0, 4($0)
lh	$t0, 8($0)
lh	$t0, 12($0)
sw	$t0, 64($0)
sw	$t1, 68($0)
sw	$t2, 72($0)
sw	$t3, 76($0)
lhu	$t0, 2($0)
lhu	$t0, 6($0)
lhu	$t0, 8($0)
lhu	$t0, 12($0)
sw	$t0, 80($0)
sw	$t1, 84($0)
sw	$t2, 88($0)
sw	$t3, 92($0)
li	$v0, 10
syscall
