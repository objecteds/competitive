from itertools import permutations

s, k = input().split()
k = int(k)

for _ in sorted(list(permutations(s, k))):
    print(''.join(_))