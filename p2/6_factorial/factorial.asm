.macro scanInt(%des)
	li		$v0, 5
	syscall
	move	%des, $v0
.end_macro

.macro printInt(%src)
	move	$a0, %src
	li		$v0, 1
	syscall
.end_macro

.macro readList(%list, %i, %des)
	sll		$t8, %i, 2
	lw		%des, %list($t8)
.end_macro

.macro writeList(%list, %i, %src)
	sll		$t8, %i, 2
	sw		%src, %list($t8)
.end_macro

.macro printStr(%src)
	.data	
		Str:	.asciiz	%src
	.text
		la		$a0, Str
		li		$v0, 4
		syscall
.end_macro

#-----------------------------------------------------------------------------
.data
	num:	.word	0 : 300
	
.text
	li		$s0, 1			#s0->highest
	writeList(num, $0, $s0)	#num[0] = 1;
	scanInt($s1)			#s1->n
	
	li		$t9, 1000000		#t9->const_10000_00
	li		$t0, 1		#t0->i
	for_in_begin:
		slt		$t1, $s1, $t0
		beq		$t1, 1, for_in_end
		
		li		$t1, 0		#t1->j
		li		$t2, 0		#t2->carry
		for_jh_begin:
			slt		$t3, $t1, $s0
			beq		$t3, 0, for_jh_end
			
			readList(num, $t1, $t3)
			multu	$t3, $t0
			mflo	$t3
			add		$t3, $t3, $t2
			div		$t3, $t9
			mflo	$t2
			mfhi	$t3
			writeList(num, $t1, $t3)
			
			addi	$t1, $t1, 1
			j		for_jh_begin
		for_jh_end:
		
		if_jmh_begin:
			slt		$t3, $0, $t2
			beq		$t3, $0, if_jmh_end
			
			writeList(num, $s0, $t2)
			addi	$s0, $s0, 1
			
		if_jmh_end:
		
		addi	$t0, $t0, 1
		j		for_in_begin
	for_in_end:
	
	subi	$s0, $s0, 1
	readList(num, $s0, $t0)
	printInt($t0)
	
	while_h_begin:
		beq		$s0, $0, while_h_end
		subi	$s0, $s0, 1
		
		readList(num, $s0, $t0)
		move	$t1, $t0
		
		li		$t2, 1
		li		$s2, 6
		li		$s3, 10
		for_out_begin:
			slt		$t3, $t2, $s2
			beq		$t3, $0, for_out_end
			
			div		$t1, $t1, $s3
			if_out_begin:
				bne		$t1, 0, if_out_end
				printInt($0)
			if_out_end:
			
			addi	$t2, $t2, 1
			j		for_out_begin
		for_out_end:
		
			printInt($t0)
		j		while_h_begin
	while_h_end:
	
li		$v0, 10
syscall