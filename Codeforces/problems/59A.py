uppers = 0
lowers = 0

s = input()

for x in list(s):
    if x.isupper():
        uppers += 1
    else:
        lowers += 1

if uppers > lowers:
    print(s.upper())
else:
    print(s.lower())