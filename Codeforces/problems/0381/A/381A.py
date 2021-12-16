n = int(input())
l = list(map(int, input().split()))

s = 0
d = 0

for i in range(n):
    if i % 2 == 0:
        if l[0] > l[-1]:
            s += l.pop(0)
        else:
            s += l.pop()
    else:
        if l[0] > l[-1]:
            d += l.pop(0)
        else:
            d += l.pop()

print(s, d)