k = int(input())
ab = [0, 1]
for i in range(k-1):
    holder = ab[0]
    ab[0] = ab[1]
    ab[1] += holder

print(ab[0], ab[1])
