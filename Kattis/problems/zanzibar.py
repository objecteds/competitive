n = int(input())

for i in range(n):
    line = list(map(int, input().split()))
    bound = 0
    j = 0
    while line[j] != 0:
        if j != len(line)-1:
            if line[j]*2 < line[j+1]:
                bound += line[j+1] - line[j]*2
        j += 1
    
    print(bound)