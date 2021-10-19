n = int(input())

for i in range(n):
    s = int(input())
    p = 0
    for j in range(0, s):
        p = (p * 2) + 1
    print(p)
