from itertools import combinations_with_replacement

s, k = input().split()
s = ''.join(sorted(list(s)))
k = int(k)
l = list(combinations_with_replacement(s, k))

for x in l:
    print(''.join(list(x)))