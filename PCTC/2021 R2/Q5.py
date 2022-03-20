temp, l = [], []

for i in range(int(input())):
    n, c, bw = input().split()
    c, bw = int(c), int(bw)
    t = c*2+bw
    temp.append((t, c, n))

temp.sort(reverse=True)

for x in temp:
    if x[0] == temp[0][0]:
        l.append(x)

l.sort(reverse=True, key=lambda k: k[1])
print(l[0][2])