import math

n, w, h = map(int, input().split())

for i in range(n):
    l = math.sqrt(w*w + h*h)
    if int(input()) <= l:
        print("DA")
    else:
        print("NE")