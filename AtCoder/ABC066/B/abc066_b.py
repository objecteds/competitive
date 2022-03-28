s = list(input())[0:-1]
t = 1

while s[0:len(s)//2] != s[len(s)//2:]:
    s.pop()
    t += 1

print(len("".join(s)))