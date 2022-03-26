g = [
    list("-A----"),
    list("-ADDDD"),
    list("-A----"),
    list("-A---S"),
    list("-A---S"),
    list("PP---S")
]

a, d, p, s = 0, 0, 0, 0
uh, ha, hs = 0, 0, 0

for i in range(int(input())):
    x, y = map(int, input().split())
    x, y = x-1, y-1
    c = g[y][x]
    if c == "A":
        a += 1
    elif c == "D":
        d += 1
    elif c == "S":
        s += 1
    elif c == "P":
        p += 1
    g[y][x] = "-"

if a == 0:
    uh += 1
elif a == 5:
    hs += 1
else:
    ha += 1

if d == 0:
    uh += 1
elif d == 4:
    hs += 1
else:
    ha += 1

if s == 0:
    uh += 1
elif s == 3:
    hs += 1
else:
    ha += 1

if p == 0:
    uh += 1
elif p == 2:
    hs += 1
else:
    ha += 1

print(f"UNHARMED:{uh}")
print(f"HIT BUT AFLOAT:{ha}")
print(f"HIT AND SUNK:{hs}")