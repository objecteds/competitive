from itertools import combinations

s, k = input().split()
k = int(k)
s = ''.join(sorted(list(s)))

for i in range(1, k+1):
    l = list(combinations(s, i))
    for x in l:
        print(''.join(list(x)))