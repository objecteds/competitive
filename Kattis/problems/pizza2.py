import math

r, c = map(int, input().split())
area = math.pi * r * r
cheese = math.pi * (r-c) * (r-c)

print(cheese/area*100)