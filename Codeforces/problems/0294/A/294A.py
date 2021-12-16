n = int(input())
a = list(map(int, input().split()))
m = int(input())

for i in range(m):
    x, y = map(int, input().split())

    right = a[x-1] - y
    left = a[x-1] - right - 1

    a[x-1] = 0 # all birds jump/fly/die

    if x == 1: # on first wire
        if n > 1:
            a[x] += right
    elif x == n: # on last wire
        a[-2] += left
    else:
        a[x] += right
        a[x-2] += left

for _ in a:
    print(_)