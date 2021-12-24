f = []
with open("2021_1.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    x = int(f[0])
    t = 0

    for _ in f:
        if int(_) > x:
            t += 1
        x = int(_)

    return t

def part_2():
    a, b, c, d = [], [], [], []
    l = []

    for i in range(len(f)):
        if len(a) != 3:
            a.append(int(f[i]))
        else:
            l.append(sum(a))
            a = []

        if i >= 1:
            if len(b) != 3:
                b.append(int(f[i]))
            else:
                l.append(sum(b))
                b = []

        if i >= 2:
            if len(c) != 3:
                c.append(int(f[i]))
            else:
                l.append(sum(c))
                c = []

        if i >= 3:
            if len(d) != 3:
                d.append(int(f[i]))
            else:
                l.append(sum(d))
                d = []

    x = l[0]
    t = 1

    for _ in l:
        if _ > x:
            t += 1
        x = _

    return t

print(part_1())
print(part_2())