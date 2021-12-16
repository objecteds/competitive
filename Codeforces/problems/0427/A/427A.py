n = int(input())
l = list(map(int, input().split()))

r = 0
c = 0

for x in l:
    if x == -1:
        if r > 0:
            r -= 1
        else:
            c += 1
    else:
        r += x

print(c)