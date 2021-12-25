m = int(input())
a = set(map(int, input().split()))
n = int(input())
b = set(map(int, input().split()))
c = []

for x in a.difference(b):
    c.append(x)
    
for x in b.difference(a):
    c.append(x)

for x in sorted(c):
    print(x)