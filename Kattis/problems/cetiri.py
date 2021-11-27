l = sorted(list(map(int, input().split())))
diff = min([abs(l[i] - l[i-1]) for i in range(1, len(l))])
missing = 101

for j in range(0, len(l)-1):
    if l[j] + diff != l[j+1]:
        missing = l[j] + diff
        break

if missing == 101:
    missing = l[-1] + diff

print(missing)

