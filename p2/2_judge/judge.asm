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
.macro scanChar(%des, %i)
	sll		$t7, %i, 2
	li		$v0, 12
	syscall
	sb		$v0, %des($t7)
.end_macro
.macro get(%des, %i)
	sll		$t7, %i, 2
	lb		%des, str($t7)
.end_macro
.macro end
	li		$v0, 10
	syscall
.end_macro

.data
	str:	.byte	0 : 23

.text
main:
	scanInt($s0)		#s0 -> n
	li		$s2, 1		#s2 -> out
	li		$t0, 0		#t0 -> i
	for_in_begin:
		slt		$t1, $t0, $s0		#t1 -> iFlag
		beq		$t1, $0, for_in_end
		scanChar(str, $t0)
		addi	$t0, $t0, 1
		j		for_in_begin
	for_in_end:
	
	subi	$s1, $s0, 1
	div		$s1, $s1, 2		#s1 -> (n-1)/2
	li		$t0, 0
	for_match_begin:
		slt		$t1, $s1, $t0		#set 1 when n-1/2 < i
		bne		$t1, $0, for_match_end	#for(i; i <= n-1/2;(when 0)
		
		if_begin:
			get($t2, $t0)
			subi	$t4, $s0, 1
			sub		$t4, $t4, $t0		#t4 -> n-1-i
			get($t3, $t4)
			beq		$t2, $t3, if_end
			li		$s2, 0
			j		for_match_end		#break;
		if_end:
		addi	$t0, $t0, 1
		j		for_match_begin
	for_match_end:
	printInt($s2)
end