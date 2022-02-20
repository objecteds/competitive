n, alt = int(input()), int(input())
asc, des = 0, 0

for i in range(n):
    x = int(input())
    if (x > alt):
        asc += x - alt
    else:
        des += alt - x
    alt = x

print(asc)
print(des)