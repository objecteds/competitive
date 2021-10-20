n = int(input())

l = {}

for i in range(n):
    k = input()
    if k in l:
        l[k] += 1
    else:
        l[k] = 1

print(len(l))
for i in l:
    print(l[i], end=" ")
