n, q = map(int, input().split())
d = {}
init = input().split()

for i in range(1, n+1):
    d[i] = init[i-1]

for j in range(q):
    line = input().split()
    req = line[0]
    if req == '1':
        d[int(line[1])] = line[2]
    else:
        print(abs(int(d[int(line[1])]) - int(d[int(line[2])])))