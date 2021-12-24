f = []
with open("2015_1.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    t = 0
    
    for _ in f[0]:
        if _ == '(':
            t += 1
        else:
            t -= 1

    return t

def part_2():
    t = 0
    c = 0

    for i in range(len(f[0])):
        if f[0][i] == '(':
            t += 1
        else:
            t -= 1

        if 0 > t:
            return i + 1

print(part_1())
print(part_2())