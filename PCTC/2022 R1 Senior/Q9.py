s = input()
flag = False
t = 0

for i in range(1, len(s)):
    if flag:
        flag = False
        continue
    if s[i] == s[i-1]:
        t += 1
        flag = True

print(t)