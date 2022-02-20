#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumNumber' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. STRING password
#

def minimumNumber(n, password):
    numbers = "0123456789"
    lower_case = "abcdefghijklmnopqrstuvwxyz"
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    special_characters = "!@#$%^&*()-+"
    
    has_number = False
    has_lower = False
    has_upper = False
    has_special = False
    length = False
    
    password = list(password)

    if len(password) >= 6:
        length = True

    for x in password:
        if x in numbers:
            has_number = True
        if x in lower_case:
            has_lower = True
        if x in upper_case:
            has_upper = True
        if x in special_characters:
            has_special = True
            
    required = 0
    
    if not has_number:
        required += 1
    if not has_lower:
        required += 1
    if not has_upper:
        required += 1
    if not has_special:
        required += 1
    if required + len(password) < 6:
        required += 6 - required - len(password)
        
    return required
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    password = input()

    answer = minimumNumber(n, password)

    fptr.write(str(answer) + '\n')

    fptr.close()
