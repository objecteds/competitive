f = []
with open("day_1.txt") as file:
    for line in file:
        line = line.strip()
        f.append(line)

def part_1():
    x = int(f[0])
    t = 0

    for line in f:
        if int(line) > x:
            t += 1
        x = int(line)

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
    t = 0

    for line in l:
        if line > x:
            t += 1
        x = line

    return t


print(part_1())
print(part_2())