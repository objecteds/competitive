line = list(map(int, input().split()))

while line != [0, 0, 0]:
    a, b, c = sorted(line)

    if (a*a + b*b == c*c):
        print("right")
    else:
        print("wrong")

    line = list(map(int, input().split()))