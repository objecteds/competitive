s1, s2 = input(), input()

if ("".join(sorted(s1)) < "".join(sorted(s2, reverse=True))):
    print("Yes")
else:
    print("No");