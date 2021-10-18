n = int(input())
total = 0

for i in range(0, n):
    l = int(input())
    total += l

total -= n - 1

print(total)