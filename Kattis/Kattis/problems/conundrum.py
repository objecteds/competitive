text = "PER"
s = input()

n = 0
d = 0

for i in s:
    if n > 2:
        n = 0
    if i != text[n]:
        d += 1
    n += 1

print(d)