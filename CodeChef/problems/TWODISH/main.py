tc = int(input())
while tc:
    tc -= 1
    n, a, b, c = map(int, input().split())
    if a+c >= n and b >= n:
        print("YES")
    else:
        print("NO")