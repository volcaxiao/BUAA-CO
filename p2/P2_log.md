# P2_log

## 内存操作

- 20221012 -10:05 begin to learn

``` mips
    data: .word 0 : 256
    //or data: .space 1024
```

## matrix

- 20221012 -11:00 begin
- 20221012 -13:00 begin to write the blog
- 20221012 -16:50 finish

## judge

- 20221013 -17:00 begin
- 20221013 -17:30 finish the C
- 20221013 -21:00 finish

## conv

- 20221013 -21:42 begin the C
- 20221014 -08:50 begin
- 20221014 -16:50 finish

## 1014

- 双发射带来写入RF结构冒险
- CPU设计决赛起步双发射
- 数据相关性
- 不能通过0.几周期看结果，会出乱子，应该看寄存器是否存入，也就是整拍，也就是不能再计算后再转发，会让整个寄存器效率下降
  - 数据冒险解决：运算两拍出结果：M->E转发解决邻一指令的冲突，W->E解决邻2指令
  - load三拍出结果
- 通过遍历来看结构的完备性
- lw需要暂停，控制stall表达式，动作：en，clr

## full

- 20221014 -17:00 begin
- 20221014 -18:00 finish

## maze

- 20221015 -15:34 begin the C
- 20221015 -16:00 finish the C
- 20221015 -18:50 begin
- 20221016 -10:30 finish

## factorial

- 20221016 -10:38 begin
- 20221016 -11:30 finish the C
- 20221016 -12:30 finish the first vision
- 20221014 -16:12 finish

## 1018

- 编译的重要性：而国内只用gcc(GNU C Compiler)，JVM(java virtual machine跨平台，开销大，慢，但是JVM的优化可以在运行时加速)
- 预测跳转（防止高频杀流水线）