tc = int(input())
while tc:
    tc -= 1
    a, b = input(), input()
    u, d = 0, 0
    for i in range(len(a)):
        if a[i] == "?" or b[i] == "?":
            u += 1
        elif a[i] != b[i]:
            d += 1
    print(d, u+d)