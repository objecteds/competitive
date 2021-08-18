highest = 0
index = 0

for i in range(0, 5):
    a, b, c, d = input().split()
    a, b, c, d = int(a), int(b), int(c), int(d)

    total = a + b + c + d

    if total >= highest:
        highest = total
        index = i+1

print(index, highest)

