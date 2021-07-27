s = input()
n = 1

for _ in s:
    if _ == "A":
        if n == 1:
            n = 2
        elif n == 2:
            n = 1
    elif _ == "B":
        if n == 2:
            n = 3
        elif n == 3:
            n = 2
    else:
        if n == 3:
            n = 1
        elif n == 1:
            n = 3

print(n)
