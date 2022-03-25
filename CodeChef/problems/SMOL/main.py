tc = int(input())
while tc:
    tc -= 1
    n, k = map(int, input().split())
    if k > 0:
        print(n%k)
    else:
        print(n)