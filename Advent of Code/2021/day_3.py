f = []
with open("./input/day_3.txt") as file:
    for line in file:
        line = line.strip()
        f.append(line)

def part_1():
    bits = []
    gamma = ""
    epsilon = ""

    for i in range(len(f[0])):
        for line in f:
            bits.append(line[i])
        
        if bits.count('0') > bits.count('1'):
            gamma += '0'
            epsilon += '1'
        else:
            gamma += '1'
            epsilon += '0'

        bits = []

    gamma = int(gamma, 2)
    epsilon = int(epsilon, 2)

    return gamma * epsilon

def part_2():
    oxygen = f.copy()
    co2 = f.copy()

    i = 0
    while not len(oxygen) == 1:
        common = ""
        for x in list(zip(*[list(x) for x in oxygen])):
            one_count = x.count("1")
            zero_count = x.count("0")
            common += "1" if one_count >= zero_count else "0"
        oxygen = list(filter(lambda x: x[i] == common[i], oxygen))
        i += 1

    i = 0
    while not len(co2) == 1:
        uncommon = ""
        for x in list(zip(*[list(x) for x in co2])):
            one_count = x.count("1")
            zero_count = x.count("0")
            uncommon += "1" if one_count < zero_count else "0"
        co2 = list(filter(lambda x: x[i] == uncommon[i], co2))
        i += 1
    return int(oxygen[0], base=2) * int(co2[0], base=2)

print(part_1())
print(part_2())

    