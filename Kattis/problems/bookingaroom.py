r, n = map(int, input().split())
l = []
found = False

for i in range(n):
    l.append(int(input()))

for i in range(1, r+1):
    if i not in l:
        print(i)
        found = True
        break

if not found:
    print("too late")