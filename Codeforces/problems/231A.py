n = int(input())
t = 0

for i in range(n):
    l = list(map(int, input().split()))
    if (l.count(1) >= 2):
        t += 1

print(t)