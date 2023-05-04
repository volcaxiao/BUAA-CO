.macro printInt(%src)
	move	$a0, %src
	li		$v0, 1
	syscall
.end_macro 
.macro scanInt(%des)
	li		$v0, 5
	syscall
	move	%des, $v0
.end_macro
.macro printStrOf(%src)
	la		$a0, %src
	li		$v0, 4
	syscall
.end_macro
.macro getIndex(%ans, %i, %j, %n)
	multu 	%i, %n
	mflo	%ans
	add		%ans, %ans, %j
	sll		%ans, %ans, 2
.end_macro

.data
	space:	.asciiz " "
	line:	.asciiz "\n"
	matrix0:	.word 0 : 64
	matrix1:	.word 0 : 64
	matrix2:	.word 0 : 64
	
.text
main:
	scanInt($s0)		#s0 -> n
	li		$t0, 0		#t0 -> i
	for_in1_begin:
		slt		$t2, $t0, $s0
		beq		$t2, $0, for_in1_end	#for(i; i < n;
		li		$t1, 0		#t1 -> j
		for_in2_begin:
			slt		$t3, $t1, $s0
			beq		$t3, $0, for_in2_end	#for(j; j < n;
			scanInt($t4)
			getIndex($t5, $t0, $t1, $s0)
			sw		$t4, matrix0($t5)
			addi	$t1, $t1, 1				#j++
			j		for_in2_begin
		for_in2_end:
		addi	$t0, $t0, 1				#i++
		j		for_in1_begin
	for_in1_end:
	
		li		$t0, 0		#t0 -> i
	for_cal1_begin:
		slt		$t2, $t0, $s0
		beq		$t2, $0, for_cal1_end	#for(i; i < n;
		li		$t1, 0		#t1 -> j
		for_cal2_begin:
			slt		$t3, $t1, $s0
			beq		$t3, $0, for_cal2_end	#for(j; j < n;
			scanInt($t4)
			getIndex($t5, $t0, $t1, $s0)
			sw		$t4, matrix1($t5)
			li		$t5, 0		#t5 -> k
			for_cal3_begin:
				slt		$t6, $t5, $s0
				beq		$t6, $0, for_cal3_end	#for(k; k < n;
				getIndex($t7, $t5, $t0, $s0)
				lw		$t7, matrix0($t7)
				multu	$t4, $t7
				mflo	$t7		#matrix[1][i][j]*matrix[0][k][i]
				getIndex($s1, $t5, $t1, $s0)
				lw		$s2, matrix2($s1)
				add		$s2, $s2, $t7
				sw		$s2, matrix2($s1)
				addi	$t5, $t5, 1		#k++
				j		for_cal3_begin
			for_cal3_end:
			addi	$t1, $t1, 1				#j++
			j		for_cal2_begin
		for_cal2_end:
		addi	$t0, $t0, 1				#i++
		j		for_cal1_begin
	for_cal1_end:

	li		$t0, 0
	for_out1_begin:
		slt		$t2, $t0, $s0
		beq		$t2, $0, for_out1_end	#for(i; i < n;
		li		$t1, 0		#t1 -> j
		for_out2_begin:
			slt		$t3, $t1, $s0
			beq		$t3, $0, for_out2_end	#for(j; j < n;
			getIndex($t4, $t0, $t1, $s0)
			lw		$t4, matrix2($t4)
			printInt($t4)
			printStrOf(space)
			addi	$t1, $t1, 1				#j++
			j		for_out2_begin
		for_out2_end:
		printStrOf(line)
		addi	$t0, $t0, 1				#i++
		j		for_out1_begin
	for_out1_end: