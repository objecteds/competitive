p = int(input())

for i in range(0, p):
    k, n = map(int, input().split())
    days = 0
    days += n

    for j in range(1, n+1):
        days += j

    print(k, days)
