tc = int(input())
while tc:
    tc -= 1
    w1, w2, x1, x2, m = map(int, input().split())
    d = (w2-w1)/m
    if d >= x1 and d <= x2:
        print(1)
    else:
        print(0)