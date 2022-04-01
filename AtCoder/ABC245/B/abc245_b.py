n = int(input())
l = list(map(int, input().split()))
l = sorted(list(set(l)))
ok = False

for i in range(len(l)):
    if i != l[i]:
        print(i)
        ok = True
        break

if not ok:
    print(len(l))