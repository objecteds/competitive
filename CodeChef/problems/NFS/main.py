tc = int(input())
while tc:
    tc -= 1
    u, v, a, s = map(int, input().split())
    x = u*u - 2*a*s
    if v*v >= x:
        print("Yes")
    else:
        print("No")