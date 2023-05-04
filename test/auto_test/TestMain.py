import os

yourProjectPath = "/media/shared/co_file/p4/version1/MIPS-CPU"
isePath = "/opt/Xilinx/14.7/ISE_DS/ISE/"
duration = "500us"


def mars_runner():
    db = "db " if (input("do you want to enable the delayBench?(Y/N): ") == "Y") else " "
    os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc "
              "CompactDataAtZero a dump .text HexText " + yourProjectPath + "/code.txt")
    os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc "
              "CompactDataAtZero a dump .text BinaryText testcode/testcode_B.txt")
    os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc "
              "CompactDataAtZero a dump .text HexText testcode/testcode.txt")
    os.system("java -jar Mars_changed.jar testcode/test.asm " + db + "nc mc "
              "CompactDataAtZero > out/MarsAns.txt")  # 利用魔改版的mars生成结果输出至out文件夹中


def your_initial():
    # 写prj文件
    v_list = []
    for root, dirs, files in os.walk(yourProjectPath):
        for file in files:
            if file.endswith(".v"):
                v_list.append(file)
    with open(yourProjectPath + "/mips.prj", "w") as prjFile:
        for i in range(len(v_list)):
            prjFile.write("Verilog work" + " \"" + yourProjectPath + "/" + v_list[i] + "\"\n")
    prjFile.close()
    # 写tcl
    with open(yourProjectPath + "/mips.tcl", "w") as tclFile:
        tclFile.write("run " + duration + ";\n"
                      + "exit")
    tclFile.close()


def ise_runner():
    os.system("cd " + yourProjectPath)
    os.environ['XILINX'] = isePath  # 设置环境变量
    os.system(isePath + "bin/lin64/fuse -nodebug -prj mips.prj -o mips.elf mips_tb > mips.log")  # 编译
    os.system("touch yourAns.txt")
    os.system("./mips.elf -nolog -tclbatch mips.tcl > yourAns.txt")  # 运行


def fc():
    os.system("cd /media/shared/co_file/p4/test/auto_test/")
    os.system("diff out/MarsAns.txt out/yourAns.txt")


# main
os.system("python3 GenTestCode.py")
mars_runner()
your_initial()
ise_runner()
fc()
