c = 2
f1 = 1
f2 = 1

while len(str(f1)) < 1000:
    f3 = f1 + f2
    f2 = f1
    f1 = f3
    c += 1

print(c)