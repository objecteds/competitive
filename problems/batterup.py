n = int(input())
m = n
line = input().split()
t = 0

for i in range(0, n):
    if int(line[i]) >= 0:
        t += int(line[i])
    else:
        m -= 1

a = t / m

print(a)