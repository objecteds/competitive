y, p = input().split()

if y.endswith("e"):
    print(y + "x" + p)
elif y.endswith("a") or y.endswith("i") or y.endswith("o") or y.endswith("u"):
    print(y[0:-1] + "ex" + p)
elif y.endswith("ex"):
    print(y + p)
else:
    print(y + "ex" + p)