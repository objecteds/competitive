from collections import defaultdict

n, m = map(int, input().split())
a = defaultdict(list)

for i in range(n):
    s = input()
    a[s].append(i+1)
    
for i in range(m):
    s = input()
    if s in a:
        print(' '.join(list(map(str, a[s]))))
    else:
        print(-1)