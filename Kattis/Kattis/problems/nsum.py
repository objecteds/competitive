n = int(input())
line = input().split()
s = 0

for i in range(n):
    s += int(line[i])

print(s)