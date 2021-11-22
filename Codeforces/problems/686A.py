n, x = map(int, input().split())
k = 0

for i in range(n):
    c, d = input().split()
    d = int(d)
    
    if c == '+':
        x += d
    else:
        if d > x:
            k += 1
        else:
            x -= d

print(x, k)