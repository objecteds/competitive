n = int(input())
line = list(map(int, input().split()))
l = {}
res = ""

for i, j in enumerate(line):
    l[j] = i+1

for k in range(n):
    res += str(l[k+1]) + " "

print(res.rstrip())