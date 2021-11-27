n = int(input())
l = list(map(int, input().split()))
best = [0, 41]

for i in range(2, n):
    temp = max(l[i], l[i-2])
    if temp < best[1]:
        best[0], best[1] = i-1, temp

print(best[0], best[1])