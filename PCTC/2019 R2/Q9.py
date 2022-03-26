n, s = int(input()), int(input())
t = 0
l = []

for i in range(n):
    l.append(int(input()))

l.sort()

for x in l:
    s -= x
    if (s < 0):
        break
    t += 1

print(n-t)