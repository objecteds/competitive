n = int(input())

for i in range(n):
    line = input().split()
    j = 0
    pos = 0
    for j in range(len(line)-1):
        if j != 0 and j != len(line)-1:
            if int(line[j]) + 1 != int(line[j+1]) and pos == 0:
                pos = j+1

    print(pos)