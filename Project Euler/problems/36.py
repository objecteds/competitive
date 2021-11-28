t = 0

for i in range(1, 1000001):
    if str(i)[::-1] == str(i) and bin(i)[2:][::-1] == bin(i)[2:]:
        t += i

print(t)