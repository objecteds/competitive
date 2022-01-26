import math
a, b, c = [int(input()) for i in range(3)]
b += math.ceil(a/2)
c += math.ceil(b/2)
a = a // 2 + math.ceil(c/2)
print(a)