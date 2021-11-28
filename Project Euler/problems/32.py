l = []

for a in range(1, 1964):
    for b in range(1, 49):
        pan = True
        c = a * b
        identity = str(a) + str(b) + str(c)

        for i in range(1, 10):
            if str(i) not in identity or len(identity) != 9:
                pan = False
                break

        if pan:
            l.append(c)

print(sum(set(l))) # 45228