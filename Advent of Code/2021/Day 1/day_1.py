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
    x = [sum([int(i) for i in f[i:i+3]]) for i in range(len(f) - 2)]

    return (len([i for i, v in enumerate(x) if int(v) > int(x[i - 1])]))


print(part_1())
print(part_2())