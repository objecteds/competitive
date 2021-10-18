n = int(input())
pt, pv = input().split()
pt = int(pt)
pv = float(pv)

total = 0

for i in range(n-1):
    t, v = input().split()
    t = int(t)
    v = float(v)

    pt_s = pt/1000
    t_s = t/1000

    total += (pv+v)/2 * (t_s - pt_s)

    pt = t
    pv = v

print(total)



