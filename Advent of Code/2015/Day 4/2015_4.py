import hashlib

f = []
with open("2015_4.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    s = f[0] + "1"
    t = 1

    while (hashlib.md5(s.encode()).hexdigest()[:5] != "00000"):
        t += 1
        s = f[0] + str(t)

    return t

def part_2():
    s = f[0] + "1"
    t = 1

    while (hashlib.md5(s.encode()).hexdigest()[:6] != "000000"):
        t += 1
        s = f[0] + str(t)

    return t

print(part_1())
print(part_2())