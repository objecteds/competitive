l = int(input())
d = int(input())
x = int(input())
nlist = []
mlist = []
n = 0
m = 0

for i in range(l, d+1):
    for digit in str(i):
        nlist.append(digit)
    nlist = map(int, nlist)
    for _ in nlist:
        n += _
    if n == x:
        n = i
        break
    else:
        n = 0
        nlist = []

for j in reversed(range(l, d+1)):
    for digit in str(j):
        mlist.append(digit)
    mlist = map(int, mlist)
    for _ in mlist:
        m += _
    if m == x:
        m = j
        break
    else:
        m = 0
        mlist = []

print(n)
print(m)