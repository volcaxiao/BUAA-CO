#printInt
.macro printInt(%src)
	move	$a0, %src
	li		$v0, 1
	syscall
.end_macro
#getInt
.macro scanInt(%des)
	li		$v0, 5
	syscall
	move	%des, $v0
.end_macro
#end the program
.macro end
	li	$v0, 10
	syscall
.end_macro
#push
.macro push(%src)
	sw		%src, 0($sp)
	subi	$sp, $sp, 4
.end_macro
#pop
.macro pop(%des)
	addi	$sp, $sp, 4
	lw		%des, 0($sp)
.end_macro
.macro getIndex(%ans, %i, %j)
	li		%ans, 8
	multu	%i, %ans
	mflo	%ans
	add		%ans, %ans, %j
	sll		%ans, %ans, 2
.end_macro

.data
	matrix:	.word	0 : 144
.text
	scanInt($s0)		#s0->n
	scanInt($s1)		#s1->m
#in------------------------------------------------------------------------------
	li		$t0, 1		#t0->i
	for_in1_begin:
		slt		$t1, $s0, $t0
		beq		$t1, 1, for_in1_end
		
		li		$t1, 1	#t1->j
		for_in2_begin:
			slt		$t2, $s1, $t1
			beq		$t2, 1, for_in2_end
			
			scanInt($t2)
			getIndex($t3, $t0, $t1)
			sw		$t2, matrix($t3)
			
			addi	$t1, $t1, 1
			j		for_in2_begin
		for_in2_end:
		
		addi	$t0, $t0, 1
		j		for_in1_begin
	for_in1_end:
#to1--------------------------------------------------------------------------
	li		$t0, 0		#t0->i
	addi	$t2, $s1, 1	#t2->m+1
	li		$t9, 1		#t9->1
	for_i_n_begin:
		slt		$t1, $s0, $t0
		beq		$t1, 1, for_i_n_end
		
		getIndex($t3, $t0, $0)
		sw		$t9, matrix($t3)
		getIndex($t3, $t0, $t2)
		sw		$t9, matrix($t3)
		
		addi	$t0, $t0, 1
		j		for_i_n_begin
	for_i_n_end:
	
	li		$t0, 0		#t0->j
	addi	$t2, $s0, 1	#t2->n+1
	li		$t9, 1		#t9->1
	for_j_m_begin:
		slt		$t1, $s1, $t0
		beq		$t1, 1, for_j_m_end
		
		getIndex($t3, $0, $t0)
		sw		$t9, matrix($t3)
		getIndex($t3, $t2, $t0)
		sw		$t9, matrix($t3)
		
		addi	$t0, $t0, 1
		j		for_j_m_begin
	for_j_m_end:
#operate-----------------------------------------------------------------------
	scanInt($a0)#a0->bi
	scanInt($a1)#a1->bj
	scanInt($a2)#a2->ei
	scanInt($a3)#a3->ej
	jal		dfs
	printInt($s2)	#s2->cnt
end
#------------------------------------------------------------------------------
dfs:
	#push
	push($ra)
	push($t0)
	push($t1)
	push($t2)
	push($t3)
	push($t4)
	push($t5)
	#parameter
	move	$t0, $a0
	move	$t1, $a1
	move	$t2, $a2
	move	$t3, $a3
#state
	if_out_begin:
		xor		$t4, $t0, $t2		#bi == ei -> t0 = 0
		xor		$t5, $t1, $t3		#bj == ej -> t5 = 0
		or		$t4, $t4, $t5		#!(bi == ei && bj == ej)
		bne		$t4, $0, if_out_end
		
		addi	$s2, $s2, 1
		j		dfs_end
		
	if_out_end:
	
	getIndex($t4, $t0, $t1)
	sw		$t9, matrix($t4)
	#if_4
	if_N_begin:
		subi	$t5, $t0, 1			#t5->bi-1
		getIndex($t4, $t5, $t1)
		lw		$t4, matrix($t4)
		beq		$t4, $t9, if_N_end
		
		move	$a0, $t5
		move	$a1, $t1
		move	$a2, $t2
		move	$a3, $t3
		jal		dfs
	
	if_N_end:
	
	if_E_begin:
		addi	$t5, $t1, 1			#t5->bj+1
		getIndex($t4, $t0, $t5)
		lw		$t4, matrix($t4)
		beq		$t4, $t9, if_E_end
		
		move	$a0, $t0
		move	$a1, $t5
		move	$a2, $t2
		move	$a3, $t3
		jal		dfs
	
	if_E_end:
	
	if_S_begin:
		addi	$t5, $t0, 1			#t5->bi+1
		getIndex($t4, $t5, $t1)
		lw		$t4, matrix($t4)
		beq		$t4, $t9, if_S_end
		
		move	$a0, $t5
		move	$a1, $t1
		move	$a2, $t2
		move	$a3, $t3
		jal		dfs
	
	if_S_end:

	if_W_begin:
		subi	$t5, $t1, 1			#t5->bj-1
		getIndex($t4, $t0, $t5)
		lw		$t4, matrix($t4)
		beq		$t4, $t9, if_W_end
		
		move	$a0, $t0
		move	$a1, $t5
		move	$a2, $t2
		move	$a3, $t3
		jal		dfs
	
	if_W_end:
	
	#to0
	getIndex($t4, $t0, $t1)
	sw		$0, matrix($t4)

dfs_end:		
#pop
	pop($t5)
	pop($t4)
	pop($t3)
	pop($t2)
	pop($t1)
	pop($t0)
	pop($ra)
#return
	jr		$ra
