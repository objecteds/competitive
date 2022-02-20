#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'funnyString' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def funnyString(s):
    rev = s[::-1]
    l = []
    funny = True
    
    for i in range(1, len(s)):
        l.append(abs(ord(s[i]) - ord(s[i-1])))
    
    for i in range(1, len(rev)):
        if abs(ord(rev[i]) - ord(rev[i-1])) != l[i-1]:
            funny = False
            
    return "Funny" if funny else "Not Funny"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = funnyString(s)

        fptr.write(result + '\n')

    fptr.close()
