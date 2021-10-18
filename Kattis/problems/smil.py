s = list(input())

for i in range(len(s)):
    if i != len(s) - 1:
        if s[i] == ":" or s[i] == ";":
            if s[i+1] == "-":
                if s[i+2] == ")":
                    print(i)
            elif s[i+1] == ")":
                print(i)


