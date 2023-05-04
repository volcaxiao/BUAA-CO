# README

- 由于时间比较的仓促，还没来得及添加功能，它现在只能完成很基础的运行mars和ise得到结果对拍
- mars用的是往届学长的魔改版mars，能够输出我们想要的信息
- 后续会加入自动生成数据的功能
  
## 具体使用

- 先在TestMain中修改自己的projectPath和isePath（后续考虑传参解决）
  - 虚拟机中的ise地址在/opt/Xilinx/14.7/ISE_DS/ISE/
- 再把code放入testcode文件夹中的asm文件中
- 运行TestMain.py
- 会生成相应的二进制文件再testcode_B中
- 生成的结果会放于out文件夹中

## 得修改linux文件夹的访问权限

## p4注意关闭延迟槽

## 0寄存器问题
