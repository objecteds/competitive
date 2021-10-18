n = int(input())

line = input().split()
towers = 1

for i in range(1, n):
    if int(line[i]) > int(line[i-1]):
        towers += 1

print(towers)