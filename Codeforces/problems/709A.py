n, b, d = map(int, input().split())
a = list(map(int, input().split()))
t = 0
c = 0

for i in range(n):
    if a[i] <= b:
        t += a[i]
        if t > d:
            t = 0
            c += 1
    
print(c)