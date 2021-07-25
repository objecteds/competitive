n = int(input())
total = 0

for i in range(0, n):
    p = int(input())
    power = int(str(p)[-1])
    p = int(str(p)[0:-1])
    total += p ** power

print(total)