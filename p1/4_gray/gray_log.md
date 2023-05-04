# gray_log

## 分析问题

- 时序逻辑
- 用一个独立的always块实现同步复位。
- 三目运算符实现格雷码计数

```verilog
always @(posedge Clk) begin
    if(En == 1) begin
    //...
    end
    else begin
    //...
    end
end
```

- 使能的写法

## debug

- 如果编译用了 `default_nettype none` 的话，输入和输出端口要显式的命名为wire和reg
- Count采取非阻塞赋值的时候，同步复位会失效，我猜可能是因为这两个并行块之间会有延时，后一个会覆盖掉前一个的值。
  - 我把同步复位always块放到了最后，bug解除
  - 也可以考虑在同一个always块中通过if-else语句实现同步复位，这样就不会出现上述bug
