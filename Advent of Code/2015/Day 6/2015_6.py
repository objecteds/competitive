f = []
with open("2015_6.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_1():
    lights = []
    on = 0

    for i in range(1000):
        l = []
        for j in range(1000):
            l.append(0)
        lights.append(l)

    for x in f:
        x = x.split()
        
        if x[0] == "toggle":
            i1, j1 = map(int, x[1].split(','))
            i2, j2 = map(int, x[3].split(','))

            for i in range(i1, i2+1):
                for j in range(j1, j2+1):
                    if lights[i][j] == 0:
                        lights[i][j] = 1
                    else:
                        lights[i][j] = 0
        elif x[1] == "on":
            i1, j1 = map(int, x[2].split(','))
            i2, j2 = map(int, x[4].split(','))

            for i in range(i1, i2+1):
                for j in range(j1, j2+1):
                    lights[i][j] = 1
        elif x[1] == "off":
            i1, j1 = map(int, x[2].split(','))
            i2, j2 = map(int, x[4].split(','))

            for i in range(i1, i2+1):
                for j in range(j1, j2+1):
                    lights[i][j] = 0

    for i in range(1000):
        for j in range(1000):
            on += lights[i][j]

    return on
    
def part_2():
    lights = []
    on = 0

    for i in range(1000):
        l = []
        for j in range(1000):
            l.append(0)
        lights.append(l)

    for x in f:
        x = x.split()
        
        if x[0] == "toggle":
            i1, j1 = map(int, x[1].split(','))
            i2, j2 = map(int, x[3].split(','))

            for i in range(i1, i2+1):
                for j in range(j1, j2+1):
                    lights[i][j] += 2
        elif x[1] == "on":
            i1, j1 = map(int, x[2].split(','))
            i2, j2 = map(int, x[4].split(','))

            for i in range(i1, i2+1):
                for j in range(j1, j2+1):
                    lights[i][j] += 1
        elif x[1] == "off":
            i1, j1 = map(int, x[2].split(','))
            i2, j2 = map(int, x[4].split(','))

            for i in range(i1, i2+1):
                for j in range(j1, j2+1):
                    if lights[i][j] > 0:
                        lights[i][j] -= 1

    for i in range(1000):
        for j in range(1000):
            on += lights[i][j]

    return on

print(part_1())
print(part_2())