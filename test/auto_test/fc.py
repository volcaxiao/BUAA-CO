import os
import re

MarsAns = open("out/MarsAns.txt", "r")
IseAns = open("out/IseAns.txt", "r")
yourAns = open("out/yourAns.txt", "w")


def op_ans():
    while True:
        txt = IseAns.readline()
        if not txt:
            break
        else:
            matcher = re.search('@(.*)', txt)
            if matcher:
                txt = matcher.group()
                yourAns.write(txt+'\n')
            else:
                yourAns.write("no match!\n")


# main
op_ans()
os.system("cd out")
os.system("fc MarsAns.txt yourAns.txt")
yourAns.close()
MarsAns.close()
IseAns.close()



