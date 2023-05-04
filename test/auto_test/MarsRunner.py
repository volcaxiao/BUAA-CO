import os

yourProjectPath = "D:/co_file/p4/version2/MIPS-CPU"

db = "db " if (input("do you want to enable the delayBench?(Y/N): ") == "Y") else " "
os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc " +
          "CompactDataAtZero a dump .text HexText " + yourProjectPath + "/code.txt")
os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc " +
          "CompactDataAtZero a dump .text BinaryText testcode/testcode_B.txt")
os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc " +
          "CompactDataAtZero a dump .text HexText testcode/testcode.txt")
os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc " +
          "CompactDataAtZero > out/MarsAns.txt")  # 利用魔改版的mars生成结果输出至out文件夹中
