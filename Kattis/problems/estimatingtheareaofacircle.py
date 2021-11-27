import math

line = input()

while line != "0 0 0":
    r, m, c = map(float, line.split())
    true = math.pi * r * r
    ratio = c / m
    square = (r*2)*(r*2)
    estimate = square * ratio

    print(true, estimate)

    line = input()
    