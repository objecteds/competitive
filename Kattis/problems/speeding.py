import math

n = int(input())
prev_t = 0
prev_d = 0
greatest = 0
sp = 0

for i in range(n):
    t, d = map(int, input().split())
    if t != 0 and d != 0:
        sp = math.floor((d-prev_d)/(t-prev_t))
        if sp > greatest:
            greatest = sp

    prev_t = t
    prev_d = d

print(greatest)
        