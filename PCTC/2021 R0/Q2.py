a, b = int(input()), input()
if b == "UP":
    a += 1 if a < 10 else 0
else:
    a -= 1 if a > 0 else 0
print(a)