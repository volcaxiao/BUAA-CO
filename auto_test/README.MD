# README

- 该程序实现的功能，将mips汇编语言的十六进制机器码，导入logisim的.circ文件的ROM中，将每个周期输出的结果
- 与在mars运行时相应每一步结果对拍。
- 完全相同则通过测试，输出：“Yes！”
- 有不同结果时输出不同的部分

## 步骤

- 程序分为几步
1. 把写好的test.asm文件用mars运行，单步执行，每一步将DM和RF中的数据写入stdout.txt中
2. 把test.asm生成16进制机器码，导入到目标.circ文件中，单步运行，每一步将DM和RF中的数据写入到result.txt中
3. 每一步比对stdout和result的结果