n, k = map(int, input().split())

alphabet = list("abcdefghijklmnopqrstuvwxyz")

s = alphabet[:k]

i = 0
while len(s) != n:
    if i % 2 == 0:
        s += s[0]
    else:
        s += s[1]
    i += 1

print("".join(s))