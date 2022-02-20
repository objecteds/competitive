#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countApplesAndOranges' function below.
#
# The function accepts following parameters:
#  1. INTEGER s house starting
#  2. INTEGER t house ending
#  3. INTEGER a location of apple
#  4. INTEGER b location of orange
#  5. INTEGER_ARRAY apples distances of apples
#  6. INTEGER_ARRAY oranges distances of oranges
#

def countApplesAndOranges(s, t, a, b, apples, oranges):
    # Write your code here
    fallen_apples = 0
    fallen_oranges = 0
    
    for apple in apples:
        if a + apple >= s and a + apple <= t:
            fallen_apples += 1
    
    for orange in oranges:
        if b + orange >= s and b + orange <= t:
            fallen_oranges += 1
            
    print(fallen_apples)
    print(fallen_oranges)

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    s = int(first_multiple_input[0])

    t = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    a = int(second_multiple_input[0])

    b = int(second_multiple_input[1])

    third_multiple_input = input().rstrip().split()

    m = int(third_multiple_input[0])

    n = int(third_multiple_input[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)