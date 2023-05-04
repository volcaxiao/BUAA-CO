import os
import re

# generate ROM-File
os.system("java -jar Mars4_5.jar test.asm nc mc CompactTextAtZero a dump .text HexText rom.txt")
content = open("rom.txt").read()

# write ROM-File to Circle—File
cur = open("cpu.circ", encoding="utf-8").read()
cur = re.sub(r'addr/data: 5 32([\s\S]*)</a>', "addr/data: 5 32\n" + content + "</a>", cur)
with open("cpu.circ", "w", encoding="utf-8") as file:
    file.write(cur)




