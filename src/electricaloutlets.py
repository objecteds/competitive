n = int(input())

for i in range(0, n):
    line = input()
    total = 0
    k = int(line.split()[0])
    for j in range(0, k):
        o = int(line.split()[j+1])
        total += o
    total -= k - 1
    print(total)

