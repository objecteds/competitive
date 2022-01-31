n = int(input())
c = 0
t = 0
while n >= 0:
    t += n
    if n > 100:
        c += 1
    n = int(input())
print(t)
print(c)