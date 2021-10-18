n = int(input())
for i in range(0, n):
    line = input()
    b, p = line.split()

    b = int(b)
    p = float(p)

    calc = (60 * b) / p
    var = 60 / p

    min = calc - var
    max = calc + var

    print(min, calc, max)