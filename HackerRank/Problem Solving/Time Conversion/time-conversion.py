#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    meridiem = s[-2:]
    hh, mm, ss = s[:-2].split(":")

    if meridiem == "AM":
        if int(hh) < 12:
            return hh + ":" + mm + ":" + ss
        else:
            return "00" + ":" + mm + ":" + ss
    else:
        if int(hh) < 12:
            return str(int(hh)+12) + ":" + mm + ":" + ss
        elif hh == "12":
            return hh + ":" + mm + ":" + ss
        elif len(str(int(hh)+12-24)) == 1:
            return "0" + str(int(hh)+12-24) + ":" + mm + ":" + ss
        else:
            return str((int(hh)+12)-24) + ":" + mm + ":" + ss

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
