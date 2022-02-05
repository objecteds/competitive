n = int(input())
c = 1

while n != 0:
    d = {}
    for i in range(n):
        line = input().split()
        if line[-1].lower() in d:
            d[line[-1].lower()] += 1
        else:
            d[line[-1].lower()] = 1

    print(f"List {c}:")

    for i in range(len(d)):
        print(f"{sorted(d)[i]} | {d[sorted(d)[i]]}")
     
    n = int(input())
    c += 1