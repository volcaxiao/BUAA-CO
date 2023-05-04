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
.macro end
	li		$v0, 10
	syscall
.end_macro
.macro push(%src)
	sw		%src, 0($sp)
	subi	$sp, $sp, 4
.end_macro
.macro pop(%des)
	addi	$sp, $sp, 4
	lw		%des, 0($sp)
.end_macro
.macro rlist(%list, %i, %des)
	sll		$t8, %i, 2
	lw		%des, %list($t8)
.end_macro
.macro wlist(%list, %i, %src)
	sll		$t8, %i, 2
	sw		%src, %list($t8)
.end_macro
.macro printStr(%str)
	.data 
	tmpLabel:	.asciiz %str
	.text
	li	$v0, 4
	la	$a0, tmpLabel
	syscall
.end_macro 
#-----------------------------------------------------------------------
.data
	symbol:		.word	0 : 7
	array:		.word	0 : 7
	
.text
main:
	li		$s1, 1		#s1->const_1
	scanInt($s0)		#s0->n
	li		$a0, 0
	jal		FullArray
end

FullArray:
	#push
	push($ra)
	push($t0)
	push($t1)
	push($t2)
	push($t3)
	#receive parameter
	move	$t0, $a0		#t0->index
	#content
	if_out_begin:
		slt		$t2, $t0, $s0
		beq		$t2, 1, if_out_end
		
		li		$t1, 0		#t1->i
		for_out_begin:
			slt		$t2, $t1, $s0
			beq		$t2, $0, for_out_end		#t2->iFlag
			
			rlist(array,$t1,$t3)
			printInt($t3)
			printStr(" ")
			
			addi	$t1, $t1, 1
			j		for_out_begin
		for_out_end:
		printStr("\n")
		jr		$ra
	if_out_end:
	
	li		$t1, 0		#t1->i
	for_ergodic_begin:
		slt		$t2, $t1, $s0
		beq		$t2, $0, for_ergodic_end		#t2->iFlag
		
		if_ergodic_begin:
			rlist(symbol, $t1, $t2)
			bne		$t2, 0, if_ergodic_end
			#if_content
			addi	$t2, $t1, 1
			wlist(array, $t0, $t2)
			wlist(symbol, $t1, $s1)
			addi	$a0, $t0, 1
			jal		FullArray
			wlist(symbol, $t1, $0)
			
		if_ergodic_end:
		addi	$t1, $t1, 1
		j		for_ergodic_begin
	for_ergodic_end:
	
	#pop
	pop($t3)
	pop($t2)
	pop($t1)
	pop($t0)
	pop($ra)
	#return
	jr		$ra
FullArray_end:
