from sys import stdin, stdout

line = list(map(int, input().split()))

while line != [0, 0]:
    n = line[0]
    m = line[1]
    t, k = 0, 0
    jack = []

    for i in range(n):
        jack.append(int(stdin.readline()))
    
    for j in range(m):
        x = int(stdin.readline())
        while k < n and jack[k] < x:
            k += 1
        if k < n and jack[k] == x:
            t += 1
            k += 1

    print(t)

    line = list(map(int, input().split()))
