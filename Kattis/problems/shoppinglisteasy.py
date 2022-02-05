n, m = map(int, input().split())
l = []

for i in range(n):
    line = input().split()
    for x in line:
        l.append(x)

s = set(l)
ans = [x for x in s if l.count(x) == n]
print(len(ans))

for x in sorted(ans):
    print(x)