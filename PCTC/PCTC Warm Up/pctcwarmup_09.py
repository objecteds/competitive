s = input()
for i in range(2, len(s)):
    if s[i] == 'e' and s[i-1] == 'm':
        print(s[i-2] + s[i+1])
        break