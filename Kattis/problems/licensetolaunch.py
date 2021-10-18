n = int(input())
line = input().split()
least = 100001
days = 0

for i in range(n):
    if int(line[i]) < int(least):
        least = line[i]
        days = i

print(days)