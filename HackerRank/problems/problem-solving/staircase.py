# Complete the staircase function below.
def staircase(n):
    for m in range(n):
        print((n - m - 1) * ' ' + (m + 1) * '#')
