# mips常用宏定义

我们知道mips的灵活性高，但是可读性差，所以要改变可读性差的问题，我们可以使用宏定义，像写c一样写汇编（）

- 下面是一些常用的宏定义，当然你可以视情况而定，将代码段中重用次数高的，或者是用汇编写意义不太明确的代码写成宏。这样调试的时候，别人和自己看代码的时候，都会舒服许多。

## end the program

- 虽然重用度肯定不高（），但表意明确。

```mips
#end the program
.macro end
    li  $v0, 10
    syscall
.end_macro
```

## write&read类

- 我们知道这些都是靠syscall实现的，所以可以这么来写
- 另外这种带参数的宏使得宏定义具有类似于C函数的特性。

```mips
#printInt
.macro printInt(%src)
    move    $a0, %src
    li      $v0, 1
    syscall
.end_macro
#getInt
.macro getInt(%des)
    li      $v0, 5
    syscall
    move    %des, $v0
.end_macro
栗子:
getInt($s0)
printInt($s0)

#直接打印字符串
.macro printStr(%str)
    .data 
        tmpLabel:   .asciiz %str
    .text
        li  $v0, 4
        la  $a0, tmpLabel
        syscall
.end_macro
栗子:
printStr("Hello CO!")

#打印特定地址的字符串
.macro printStrOf(%src)
    li  $v0, 4
    la  $a0, %src
    syscall
.end_macro
栗子:
.data
    myStr:  .asciiz "Hello CO!"
.text
    printStrOf(myStr)

#printChar
.macro printChar(%src, %i)
    sll     %i, %i, 2
    lw      %i, %src(%i)
    move    $a0, %i
    li      $v0, 11
    syscall
.end_macro
#getChar
.macro getChar(%des, %i)
    li      $v0, 12
    syscall
    sll     %i, %i, 2
    sw      %v0, %des(%i)
.end_macro
```

## push&pop

- 我们在写函数的时候时常要用到push和pop操作，所以做好写一个宏。

```mips
#push
.macro push(%src)
    sw      %src, 0($sp)
    subi    $sp, $sp, 4
.end_macro
#pop
.macro pop(%des)
    addi    $sp, $sp, 4
    lw      %des, 0($sp)
.end_macro
栗子:
    fun:
    push($ra)
    push($s0)
    push($t0)
        ...
    pop($t0)
    pop($s0)
    pop($ra)
    jr  $ra
```

## getIndex类

- 常见的有get二维数组（矩阵）的系数，还有数组的系数

```mips
#get the vector index
.macro get_vector_index(%index, %x)
    sll     %index, %x, 2
.end_macro
#get the matrix index
.macro get_matrix_Index(%ans, %i, %j)
    li      %ans, your_number_of_columns    #这里填上你的矩阵列数/行数,你当然也可以把他当参数输入
    multu   %i, %ans
    mflo    %ans
    add     %ans, %ans, %j
    sll     %ans, %ans, 2
.end_macro
```

> 待补充