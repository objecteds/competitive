#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'dayOfProgrammer' function below.
#
# The function is expected to return a STRING.
# The function accepts INTEGER year as parameter.
#

def dayOfProgrammer(year):
    day = ""
    if year != 1918:
        if year > 1918:
            if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
                day = "12.09.{}".format(year)
            else:
                day = "13.09.{}".format(year)
        else:
            if year % 4 == 0:
                 day = "12.09.{}".format(year)
            else:
                day = "13.09.{}".format(year)
    else:
        day = "26.09.1918"
    return day

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())

    result = dayOfProgrammer(year)

    fptr.write(result + '\n')

    fptr.close()
