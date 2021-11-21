n, h = map(int, input().split())
l = list(map(int, input().split()))
c = 0

for x in l:
    if x > h:
        c += 2
    else:
        c += 1

print(c)
