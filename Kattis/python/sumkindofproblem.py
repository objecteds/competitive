p = int(input())

for i in range(p):
    k, n = map(int, input().split())
    s1 = n * (n+1) // 2
    s2 = n * n
    s3 = n * (n + 1)


    print(k, s1, s2, s3)