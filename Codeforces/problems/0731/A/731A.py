s = map(ord, input())

r = 0
c = 0

a = ord('a')
z = ord('z')

for x in s:
    if a <= x <= z:
        x -= a
        r += min(abs(x - c), 26 - abs(x - c))
        c = x
    else:
        break

print(r)
