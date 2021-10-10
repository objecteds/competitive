n = 0

for _ in list(map(int, list(str(2**1000)))):
    n += _

print(n)
