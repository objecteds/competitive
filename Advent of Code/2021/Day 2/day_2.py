f = []
with open("day_2.txt") as file:
    for line in file:
        line = line.strip()
        f.append(line)

def part_1():
    d, p = 0, 0
    
    for x in f:
        c, n = x.split()
        n = int(n)

        if c == "forward":
            p += n
        elif c == "down":
            d += n
        else:
            d -= n

    return d * p

def part_2():
    d, p, a = 0, 0, 0

    for x in f:
        c, n = x.split()
        n = int(n)

        if c == "forward":
            p += n
            d += a * n
        elif c == "down":
            a += n
        else:
            a -= n

    return d * p

print(part_1())
print(part_2())



