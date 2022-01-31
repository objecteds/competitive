minv, maxv, x, y, n = int(input()), int(input()), 0, 0, int(input())
while n != -1:
    if minv <= n <= maxv:
        x += 1
    else:
        y += 1
    n = int(input())
print(x)
print(y)
