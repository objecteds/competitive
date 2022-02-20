#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    # Write your code here
    unrounded = ['0', '1', '2', '5', '6', '7']
    rounded_grades = []
    
    for grade in grades:
        if grade < 38:
            rounded_grades.append(grade)
        elif str(grade)[-1] in unrounded:
            rounded_grades.append(grade)
        elif int(str(grade)[-1]) > 0 and int(str(grade)[-1]) < 5:
            rounded_grades.append(int(str(grade)[0] + "5"))
        else:
            rounded_grades.append(int(str(int(str(grade)[0])+1) + "0"))

    return rounded_grades

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
