import math

tc = int(input())
while tc:
    tc -= 1
    a, b, x = map(int, input().split())
    print(int(math.ceil(b-a)/x))