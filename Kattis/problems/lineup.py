l = []

for i in range(int(input())):
    l.append(input())

inc = sorted(l)
dec = sorted(l, reverse=True)

if l == inc:
    print("INCREASING")
elif l == dec:
    print("DECREASING")
else:
    print("NEITHER")