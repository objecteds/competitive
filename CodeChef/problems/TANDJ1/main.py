tc = int(input())
while tc:
    tc -= 1
    a, b, c, d, k = map(int, input().split())
    t = abs(a-c) + abs(b-d)
    if k >= t and (k-t) % 2 == 0:
        print("YES")
    else:
        print("NO")
        