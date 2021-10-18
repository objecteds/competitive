c = float(input())
l = int(input())
t = 0

for i in range(0, l):
    w, l = input().split()
    w = float(w)
    l = float(l)

    a = w * l
    t += c * a

print(t)
