import os
import re

marsProjectAdd = "mips1.asm"  # mars文件名 用相对路径
hexCodeAdd = "result\mem-image.txt"  # 导出指令地址
Bat = "getResult.bat"
Code = open(hexCodeAdd, "w+", encoding='gbk')
bat = open(Bat, "w")
fileAdd = "CPU_可拓展.circ"  # 电路地址
tmpAdd = "result/tmp.txt"  # 中间结果文件地址
beginAdd = "0x00003000"  # 指令起始地址
endAdd = "0x0000306c"  # 指令结束地址
os.system("java -jar D:\Desktop\Mars4_5.jar a db mc CompactDataAtZero dump "
          + beginAdd + "-" + endAdd + " HexText " + hexCodeAdd + " " + marsProjectAdd)
content = Code.read()
Code.seek(0, 0)
Code.write("v2.0 raw\n" + content)

testbench = open(hexCodeAdd, "r", encoding='gbk').read()
src = open(fileAdd, "r", encoding='gbk').read()
src_rep = re.sub(r'addr/data: 5 32([\s\S]*)</a>', "addr/data: 5 32\n" + testbench + "</a>", src)
open(fileAdd, "w").write(src_rep)
os.system("java -jar D:\Desktop\logisim-generic-2.7.1.jar " + fileAdd + " -tty table > " + tmpAdd)
