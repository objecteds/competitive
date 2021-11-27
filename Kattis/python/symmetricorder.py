n = int(input())
i = 0

while n != 0:
    i += 1
    print("SET", str(i))

    names = []
    for j in range(0, n):
        names.append(input())
    names.reverse()

    sym = []

    if n % 2 == 0:
        for j in range(0, n):
            if j % 2 == 0:
                sym.append(names[j])
            else:
                sym.insert(0, names[j])
    else:
        sym.append(names[0])
        for j in range(1, n):
            if j % 2 == 0:
                sym.insert(0, names[j])
            else:
                sym.append(names[j])

    for _ in sym:
        print(_)

    n = int(input())
