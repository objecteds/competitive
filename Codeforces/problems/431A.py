a = list(map(int, input().split()))
s = list(map(int, list(input())))

c = 0

for x in s:
    c += a[x-1]

print(c)
