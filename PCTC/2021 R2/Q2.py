d, a, b = int(input()), input(), input()

if a == "LOOSE" or b == "LOOSE":
    print(d+5)
elif a == "UNTUCKED" or b == "UNTUCKED":
    print(d)
else:
    print(0)