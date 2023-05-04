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
.macro printStrOf(%src)
	la		$a0, %src
	li		$v0, 4
	syscall
.end_macro
.macro end
	li		$v0, 10
	syscall
.end_macro
.macro getIndex(%ans, %i, %j, %n)
	multu	%i, %n
	mflo	%ans
	add		%ans, %ans, %j
	sll		%ans, %ans, 2
.end_macro
.macro push(%src)
	sw		%src, 0($sp)
	subi	$sp, $sp, 4
.end_macro
.macro pop(%des)
	addi	$sp, $sp, 4
	lw		%des, 0($sp)
.end_macro
#--------------------------------------------------------------------
.data
	g:	.word 0 : 144
	f:	.word 0 : 144
	h:	.word 0 : 144
	space:	.asciiz " "
	line:	.asciiz "\n"
.text
	scanInt($s0)		#s0 -> m1
	scanInt($s1)		#s1 -> n1
	scanInt($s2)		#s2 -> m2
	scanInt($s3)		#s3 -> n2
	
	li		$t0, 0		#t0 -> i
	for_im1_begin:						#{
		slt		$t4, $t0, $s0			#t4 -> iFlag
		beq		$t4, $0, for_im1_end	#for(i; i<m1; 
		
		push($t4)
		li		$t1, 0		#t1 -> j
		for_jn1_begin:						#{
			slt		$t4, $t1, $s1			#t4 -> jFlag
			beq		$t4, $0, for_jn1_end	#for(j; j<n1; 
			
			scanInt($t2)
			getIndex($t3, $t0, $t1, $s1)
			sw		$t2, f($t3)
			
			addi	$t1, $t1, 1				#j++;
			j		for_jn1_begin			#)
		for_jn1_end:						#}
		pop($t4)
		
		addi	$t0, $t0, 1				#i++;
		j		for_im1_begin			#)
	for_im1_end:						#}
#------------------------------------------------------------------
	sub		$s4, $s0, $s2
	addi	$s4, $s4, 1		#s4 -> m1-m2+1
	sub		$s5, $s1, $s3
	addi	$s5, $s5, 1		#s5 -> n1-n2+1
	li		$t0, 0		#t0 -> k
	for_km2_begin:						#{
		slt		$t4, $t0, $s2			#t4 -> kFlag
		beq		$t4, $0, for_km2_end	#for(k; k<m2; 
		
		push($t4)
		li		$t1, 0		#t1 -> l
		for_ln2_begin:						#{
			slt		$t4, $t1, $s3			#t4 -> lFlag
			beq		$t4, $0, for_ln2_end	#for(l; l<n2; 
			
			scanInt($t7)
			getIndex($t3, $t0, $t1, $s3)
			sw		$t7, h($t3)
			
			push($t4)
			li		$t2, 0		#t2 -> i
			for_im12_begin:						#{
				slt		$t4, $t2, $s4			#t4 -> iFlag
				beq		$t4, $0, for_im12_end	#for(i; i<m1-m2+1; 
				
				push($t4)
				li		$t3, 0		#t3 -> j
				for_jn12_begin:						#{
					slt		$t4, $t3, $s5			#t4 -> lFlag
					beq		$t4, $0, for_jn12_end	#for(j; j<n1-n2+1; 
					
					add		$t5, $t2, $t0			#t5 -> i+k
					add		$t6, $t3, $t1			#t6 -> j+l
					getIndex($t4, $t5, $t6, $s1)
					lw		$t5, f($t4)
					mult	$t5, $t7
					mflo	$t5
					getIndex($t4, $t2, $t3, $s5)
					lw		$t6, g($t4)
					add		$t6, $t5, $t6
					sw		$t6, g($t4)
			
					addi	$t3, $t3, 1				#j++;
					j		for_jn12_begin			#)
				for_jn12_end:						#}
				pop($t4)
			
			
			
				addi	$t2, $t2, 1				#i++;
				j		for_im12_begin			#)
			for_im12_end:						#}
			pop($t4)
			
			
			addi	$t1, $t1, 1				#l++;
			j		for_ln2_begin			#)
		for_ln2_end:						#}
		pop($t4)
		
		addi	$t0, $t0, 1				#k++;
		j		for_km2_begin			#)
	for_km2_end:						#}
#--------------------------------------------------------------------------
	li		$t0, 0		#t0 -> i
	for_iout_begin:						#{
		slt		$t4, $t0, $s4			#t4 -> iFlag
		beq		$t4, $0, for_iout_end	#for(i; i<m1; 
		
		push($t4)
		li		$t1, 0		#t1 -> j
		for_jout_begin:						#{
			slt		$t4, $t1, $s5			#t4 -> jFlag
			beq		$t4, $0, for_jout_end	#for(j; j<n1; 
			
			getIndex($t3, $t0, $t1, $s5)
			lw		$t2, g($t3)
			printInt($t2)
			printStrOf(space)
			
			addi	$t1, $t1, 1				#j++;
			j		for_jout_begin			#)
		for_jout_end:						#}
		pop($t4)
		
		printStrOf(line)
		addi	$t0, $t0, 1				#i++;
		j		for_iout_begin			#)
	for_iout_end:						#}
end