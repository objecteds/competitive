_, t = input().split()
if _ == "CR":
    t = int(t)
else:
    t = -int(t)

for i in range(int(input())):
    c, v = input().split()
    if c == "CR": t += int(v)
    else: t -= int(v)

if t >= 0:
    print("CR", t)
else:
    print("DR", abs(t))