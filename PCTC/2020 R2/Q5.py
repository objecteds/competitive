r = 0
s = 0
f = False
for i in range(7):
    x = input()
    if x[0] == 's':
        s += 1
        if s >= 3:
            f = True
    else:
        s = 0
    if x[1] == 'r':
        r += 1

if f:
    print("***")

for i in range(r):
    print(" | ")

print("\_/")