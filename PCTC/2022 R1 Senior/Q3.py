s = input()
for i in range(1, len(s)):
    if not int(s[i]) > int(s[i-1]):
        print(s[i])