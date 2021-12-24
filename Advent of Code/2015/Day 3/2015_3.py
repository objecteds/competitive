f = []
with open("2015_3.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    s = f[0]
    x, y = 0, 0
    l = [(x, y)]
    
    for _ in s:
        if _ == '^':
            y += 1
        elif _ == 'v':
            y -= 1
        elif _ == '>':
            x += 1
        elif _ == '<':
            x -= 1
        
        l.append((x, y))

    return len(set(l))

def part_2():
    s = f[0]
    x1, y1, x2, y2 = 0, 0, 0, 0
    l = [(0, 0)]

    for i in range(len(s)):
        if (i % 2 == 0):
            if s[i] == '^':
                y1 += 1
            elif s[i] == 'v':
                y1 -= 1
            elif s[i] == '>':
                x1 += 1
            elif s[i] == '<':
                x1 -= 1
        else:
            if s[i] == '^':
                y2 += 1
            elif s[i] == 'v':
                y2 -= 1
            elif s[i] == '>':
                x2 += 1
            elif s[i] == '<':
                x2 -= 1

        l.append((x1, y1))
        l.append((x2, y2))

    return len(set(l))

print(part_1())
print(part_2())