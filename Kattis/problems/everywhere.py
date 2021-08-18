t = int(input())

for i in range(0, t):
    cities = []
    unique = 0
    n = int(input())
    for j in range(0, n):
        s = input()
        if s in cities:
            unique += 0
        else:
            unique += 1
        cities.append(s)
    print(unique)
        