a, b = input(), input()
t = 0

for x in set(b):
    if x not in a:
        t += 1

print(t)