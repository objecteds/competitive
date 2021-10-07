n = int(input())

for i in range(n):
    years = 0
    p, r, f = map(int, input().split())
    popl = p
    
    while popl <= f:
        popl *= r
        years += 1

    print(years)