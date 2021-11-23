line = input()

while line != "0 0 0 0":
    line = list(map(int, line.split()))
    starting = line[0]

    for i in range(4):
        line[i] = ((line[i] + 40 - starting) % 40) * 9

    res = 360 * 3 + (360 - line[1]) % 360 + (360 + line[2] - line[1]) % 360 + (360 + line[2] - line[3]) % 360

    print(res)

    line = input()


