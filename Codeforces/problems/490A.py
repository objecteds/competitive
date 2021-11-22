n = int(input())
t = list(map(int, input().split()))

l1 = []
l2 = []
l3 = []

for i in range(len(t)):
    if t[i] == 1:
        l1.append(t.index(1, i))
    elif t[i] == 2:
        l2.append(t.index(2, i))
    else:
        l3.append(t.index(3, i))

w = min(len(l1), len(l2), len(l3))

l1 = l1[:w]
l2 = l2[:w]
l3 = l3[:w]

x = [[i+1, j+1, k+1] for i, j, k in zip(l1, l2, l3)]

print(w)

if len(x) > 0:
    for k in range(len(x)):
        print(*x[k])