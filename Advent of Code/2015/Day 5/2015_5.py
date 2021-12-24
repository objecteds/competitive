f = []
with open("2015_5.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    nice = 0

    for x in f:
        if 'ab' in x or 'cd' in x or 'pq' in x or 'xy' in x:
            continue

        vowels = x.count('a') + x.count('e') + x.count('i') + x.count('o') + x.count('u')

        double = False

        for i in range(1, len(x)):
            if x[i-1] == x[i]:
                double = True

        if vowels >= 3 and double:
            nice += 1

    return nice

def part_2():
    nice = 0

    for x in f:
        pair, repeat = False, False
        for i in range(1, len(x)):
            if x.count(x[i-1] + x[i]) >= 2:
                pair = True

        for i in range(2, len(x)):
            if x[i] == x[i-2]:
                repeat = True

        if pair and repeat:
            nice += 1

    return nice

print(part_1())
print(part_2())