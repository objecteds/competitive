n = int(input())
l = list(map(int, input().split()))
highest = [l[0]]

for x in l:
    if x > highest[-1]:
        highest.append(x)

print(len(highest))
print(' '.join(list(map(str, highest))))