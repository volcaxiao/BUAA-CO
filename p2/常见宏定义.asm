#end the program
.macro end
	li	$v0, 10
	syscall
.end_macro

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

#直接打印字符串
.macro printStr(%str)
	.data 
	tmpLabel:	.asciiz %str
	.text
	li	$v0, 4
	la	$a0, tmpLabel
	syscall
.end_macro 
#打印特定地址的字符串
.macro printStrOf(%src)
	li	$v0, 4
	la	$a0, %src
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

#get the vector index
.macro get_vector_index(%index, %x)
	sll	%index, %x, 2
.end_macro
#get the matrix index
.macro get_matrix_Index(%ans, %i, %j, %n)
	li		%ans, %n
	multu	%i, %ans
	mflo	%ans
	add		%ans, %ans, %j
	sll		%ans, %ans, 2
.end_macro
#read&write the list
.macro rlist(%list, %i, %des)
	sll		$t8, %i, 2
	lw		%des, %list($t8)
.end_macro
.macro wlist(%list, %i, %src)
	sll		$t8, %i, 2
	sw		%src, %list($t8)
.end_macro