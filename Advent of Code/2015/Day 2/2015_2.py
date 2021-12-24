f = []
with open("2015_2.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    t = 0

    for x in f:
        h, l, w = map(int, x.split('x'))
        t += 2*l*w + 2*w*h + 2*h*l + min([l*w, w*h, h*l])

    return t

def part_2():
    t = 0

    for x in f:
        h, l, w = map(int, x.split('x'))
        t += 2*(h+l+w) - 2*max([l, w, h]) + h*l*w

    return t


print(part_1())
print(part_2())