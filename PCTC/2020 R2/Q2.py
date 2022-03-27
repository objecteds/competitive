n = input()
i = 1
t = 0
while True:
    if len(n) < i:
        break
    t += 1
    i += 1
    n = input()

print(t)