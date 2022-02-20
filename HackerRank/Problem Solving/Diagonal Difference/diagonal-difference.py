#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    N = int(input())
    total = 0
    for i in range(N):
        row = input().split()
        total += int(row[i])-int(row[-(i+1)])
    return abs(total)
    

if __name__ == '__main__':
    N = int(input())
    total = 0
    for i in range(N):
        row = input().split()
        total += int(row[i])-int(row[-(i+1)])
    print(abs(total))
