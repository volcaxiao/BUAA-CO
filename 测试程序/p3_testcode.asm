ori $gp, $zero, 0
ori $sp, $zero, 0
ori $at, $zero, 0x3456
add $at, $at, $at
lw  $at, 4($zero)
sw  $at, 4($zero)
lui $v0, 0x7878
sub $v1, $v0, $at
lui $a1, 0x1234
ori $a0, $zero, 5
nop 
sw  $a1, -1($a0)
lw  $v1, -1($a0)
beq $v1, $a1, b3c
j	b70
b3c:
ori $a3, $v1, 0x404
beq $a3, $v1, b70
nop
lui $t0, 0x7777
ori $t0, $t0, 0xffff
neg $zero, $t0
ori $zero, $zero, 0x1100
add $t2, $a3, $a2
ori $t0, $zero, 0
ori $t1, $zero, 1
ori $t2, $zero, 1
b68:
add $t0, $t0, $t2
beq $t0, $t1, b68
b70:
j	b70