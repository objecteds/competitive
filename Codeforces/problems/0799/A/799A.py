import math

n, t, k, d = map(int, input().split())

x = math.ceil(n/k) * t

if (d + t) < x:
    print("YES")
else:
    print("NO")