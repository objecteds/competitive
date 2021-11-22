k, r = map(int, input().split())

for i in range(1, 11):
    c = k * i
    if c % 10 == 0 or (c - r) % 10 == 0:
        print(i)
        break