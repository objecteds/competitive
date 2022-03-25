tc = int(input())
while tc:
    tc -= 1
    s, a, b, c = map(int, input().split())
    t = s*(1+c/100)

    if a <= t and t <= b:
        print("YES")
    else:
        print("NO")