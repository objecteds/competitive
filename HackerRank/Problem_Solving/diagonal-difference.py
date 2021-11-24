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
