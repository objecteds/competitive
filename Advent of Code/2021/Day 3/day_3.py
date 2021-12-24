f = []
with open("day_3.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    bits = []
    gamma, epsilon = "", ""

    for i in range(len(f[0])):
        for _ in f:
            bits.append(_[i])
        
        if bits.count('0') > bits.count('1'):
            gamma += '0'
            epsilon += '1'
        else:
            gamma += '1'
            epsilon += '0'

        bits = []

    gamma, epsilon = int(gamma, 2), int(epsilon, 2)

    return gamma * epsilon

def part_2():
    oxygen, co2 = f.copy(), f.copy()

    i = 0
    while not len(oxygen) == 1:
        c = ""
        for _ in list(zip(*[list(x) for x in oxygen])):
            if _.count('0') > _.count('1'):
                c += '0'
            else:
                c += '1'
        
        oxygen = list(filter(lambda x: x[i] == c[i], oxygen))
        i += 1

    i = 0
    while not len(co2) == 1:
        uc = ""
        for _ in list(zip(*[list(x) for x in co2])):
            if _.count('0') <= _.count('1'):
                uc += '0'
            else:
                uc += '1'

        co2 = list(filter(lambda x: x[i] == uc[i], co2))
        i += 1

    oxygen, co2 = int(oxygen[0], 2), int(co2[0], 2)

    return oxygen * co2

print(part_1())
print(part_2())