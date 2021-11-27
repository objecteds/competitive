l, x = map(int, input().split())
c = 0
t = 0

for i in range(x):
    e, p = input().split()
    p = int(p)

    if e == "enter":
        if c + p <= l:
            c += p
        else:
            t += 1
    else:
        c -= p

print(t)