import math

h, v = map(int, input().split())
l = math.ceil(h / math.sin(math.radians(v)))
print(l)