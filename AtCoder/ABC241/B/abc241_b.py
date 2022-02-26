n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
ok = True

for i in range(m):
    if b[i] in a:
        a.remove(b[i])
    else:
        ok = False

if not ok:
    print("No")
else:
    print("Yes")