n = int(input())
total = 0

line = map(int, input().split())

for _ in line:
    if _ < 0:
        total += -_

print(total)
