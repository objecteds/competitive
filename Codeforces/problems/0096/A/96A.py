s = input()
c = s[0]
t = 1
found = False

for i in range(1, len(s)):
    if s[i] == c:
        t += 1
        if t >= 7:
            found = True
            break
    else:
        t = 1
    c = s[i]

if s[-1] == c:
    t += 1
    if t >= 7:
        found = True

if found:
    print("YES")
else:
    print("NO")
