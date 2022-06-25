import math
x, t, y = [int(input()) for i in range(3)]
print(math.ceil((x*t)/(y-x) + t))