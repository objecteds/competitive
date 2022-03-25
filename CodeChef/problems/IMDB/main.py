tc = int(input())
while tc:
    tc -= 1
    best = 0
    n, x = map(int, input().split())
    for i in range(n):
        s, r = map(int, input().split())
        if x >= s:
            best = max(best, r)
    print(best)