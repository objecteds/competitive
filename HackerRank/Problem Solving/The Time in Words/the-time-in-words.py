#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeInWords' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER h
#  2. INTEGER m
#

def timeInWords(h, m):
    hours = "one two three four five six seven eight nine ten eleven twelve".split()
    minutes = ['one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen', 'twenty', 'thirty', 'forty', 'fifty']
    minute = ""
    
    if m == 0:
        hour = hours[h-1]
        return f"{hour} o' clock"
    elif 1 <= m and m <= 30:
        hour = hours[h-1]
        if m >= 1 and m <= 20:
            minute = minutes[m-1]
        else:
            minute = minutes[int(str(m)[0])+16] + " " + minutes[int(str(m)[1])-1]
        if m == 1:
            return f"one minute past {hour}"
        elif m == 15:
            return f"quarter past {hour}"
        elif m == 30:
            return f"half past {hour}"
        else:
            return f"{minute} minutes past {hour}"
    else:
        hour = hours[h]
        m = 60 - m
        if m >= 1 and m <= 20:
            minute = minutes[m-1]
        else:
            minute = minutes[int(str(m)[0])+16] + " " + minutes[int(str(m)[1])-1]
        if m == 1:
            return f"one minute to {hour}"  
        elif m == 15:
            return f"quarter to {hour}"
        else:
            return f"{minute} minutes to {hour}"
            
        
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = int(input().strip())

    m = int(input().strip())

    result = timeInWords(h, m)

    fptr.write(result + '\n')

    fptr.close()
