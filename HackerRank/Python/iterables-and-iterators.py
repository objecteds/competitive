from itertools import combinations

n = int(input())
s = ''.join(input().split())
k = int(input())
l = list(combinations(s, k))
t = 0

for x in l:
    if 'a' in x:
        t += 1
        
print(t / len(l))