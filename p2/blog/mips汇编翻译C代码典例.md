---
title: mips汇编翻译C代码典例/经验
date: 2022-10-12 10:02:24
tags: [北航,大二,CO,计组,MIPS,P2]
categories: BUAA计算机组成原理
---

汇编语言是一种比机械码稍高级一点的语言，而MIPS的汇编语言是一种专用于MIPS架构的CPU的汇编语言，相较于ARM，X86等现在主流的架构的汇编语言，MIPS较为简单，适合入门。
MIPS汇编语言是可以一对一翻译成机械码的，每条指令的翻译规则不同，这里需要查手册来解决。
至于我们学的C/C++等高级语言，也可以翻译成汇编语言，这个过程叫编译，一般来说编译器可以办成这件事，但对于我们需要学习MIPS的人来说，这需要咱们自己来。

<!--more-->

# mips汇编翻译C代码典例/经验

> 说是翻译C代码，其实要是在介绍如何MIPS汇编语言实现高级语言中出现的条件、循环、子程序结构。

## 二维数组的写法/内存的申请

- 写法一：比较的基础，`data: .sapce memory_size_bit`，注意单位是bit
- 写法二：辨析.word/.byte/.half的两种写法(以.word为例)

```mips
data:   .word 64        #以字的形式储存64这个数，而不是像.space一样申请64字的内存
data:   .word 0 : 64    #以0为初始数据填到64个字的内存里，这才是我们想达到的效果
#所以你也可以
data:   .word 1 : 64    #得到64个(int)1
```

## 打好macro

- 打好macro很重要，他的功能类似于函数，能够消除ctrl+CV的代码重用（ly：这是一个很糟糕的事情），提高代码的可读性。
- 有很多常用的macro比如print、read、end、push等这些，详细请见我的另一个博客：[mips常用宏定义](http://volcaxiao.github.io/2022/10/12/mips常用宏定义/)
- 但我们每一次写mips都得自己手打macro，实在是不太优雅，于是我们可以用脚本来实现这样一个无脑功能。
- 通过脚本新建文件

## 函数一般模板写法

- 我们在函数调用的时候基本上可以遵循这样一个模板

```MIPS
    # 入栈
    push($ra)
    # push(...)
    # 传参
    move    $t0, $a0
    #函数过程
    # ...
    # 出栈
    # pop(...)
    pop($ra)
    # return
    jr      $ra
```

- 虽然模板很简单，但我们还是得注意几个小问题

- 我们一般会把a_n作为函数的参数传递（约定俗成，本质上讲a_n和t_n啥的都是一样的，但是不约定规范，可读性和可维护性都会大打折扣）
- push和pop要遵循LIFO(last in first out)，可不能一顿无脑pp，先push的要后面pop，要不然就会出现你的return到了一个不知名的地方。（很诡异
- 调用函数时，调用者里的用过的t函数一般要push进栈，为啥呢，也是约定俗成，具体请看下一节[t/s寄存器之辩](#ts寄存器之辩)

## t/s寄存器之辩

- 这仅是我按照“t寄存器调用者维护，s寄存器被调用者维护”的一些个人的理解，自己看教程的时候其实不是很明白这句话的意思，但在后面打代码的过程中自己悟到了一些。

- t寄存器调用者维护：
  - t是指temporary，你把光标放置到Mars的寄存器处能够得到这个提示，意思就相当于临时变量。
  - 由调用者维护的意思是你在调用别的函数时，你得保证你的t寄存器调用前和return后不会发生变化（类比在C中的临时变量），所以你应该去维护他。
  - 一般的维护方法是用栈，在调用前先把t压入栈，调用后再把t pop出来，于是你的t就不会改变。

- s寄存器被调用者维护：
  - s的含义是saved temporary，是指被调用函数不应改变s寄存器的值，就算要改变也应该先入栈最后再出栈。
  - 总之，被调用函数在编写时应该要保证，函数前后s寄存器的值不发生变化。

- 这是约定下来的规范，只有这样，用汇编这种灵活的语言才不会出岔子。

## 条件循环语句固定写法

### 条件语句

- 最基础的肯定还是if-else结构的语句，大致可以按照下面的写法：

```MIPS

```

- 另外进阶一点的是if-else_if-else结构

```mips

```

- 最后是switch语句

### 循环语句

- for的结构也是固定的基本上

```mips
  li    $t0, 0              #t0 -> i
  for_need_begin:           #{
    slt   $t1, $t0, $s0     #t1 -> iFlag
    beq   $t1, $0, for_need_end #for(i; i<n; 
    # ... 
    addi  $t0, $t0, 1       #i++;
    j     for_need_begin      #)
  for_need_end:             #}
```

- 多重循环push&pop

```mips
  li    $t0, 0              #t0 -> i
  for_need_begin:           #{
    slt   $t1, $t0, $s0     #t1 -> iFlag
    beq   $t1, $0, for_need_end #for(i; i<n; 
    
    push($t0)
    push($t1)
    li    $t0, 0              #t0 -> j
    for_jn1_begin:            #{
      slt   $t1, $t0, $s0     #t1 -> jFlag
      beq   $t1, $0, for_jn1_end  #for(j; j<n1; 

      
      
      addi  $t0, $t0, 1      #j++;
      j   for_jn1_begin     #)
    for_jn1_end:            #}
    pop($t1)
    pop($t0)
    
    addi  $t0, $t0, 1       #i++;
    j     for_need_begin      #)
  for_need_end:             #}
```

- break
- 固定for和if的写法，记得在for最后写上i++ j begin

### 多重逻辑判断

- 多重逻辑条件的写法

## mips一般代码建议

- 写比对的C代码
- 写好注释
- 写好label
- 写好macro
