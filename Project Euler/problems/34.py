import math

l = []

for i in range(3, 100001):
    t = 0
    for x in list(str(i)):
        t += math.factorial(int(x))
    if t == i:
        l.append(i)

print(sum(l))