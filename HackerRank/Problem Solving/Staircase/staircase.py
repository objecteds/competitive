#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    for m in range(n):
        print((n - m - 1) * ' ' + (m + 1) * '#')
    

if __name__ == '__main__':
    n = int(input())

    staircase(n)
