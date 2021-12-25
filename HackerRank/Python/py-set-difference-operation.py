a, b = set(), set()
n = int(input())

for x in set(map(int, input().split())):
    a.add(x)
    
n = int(input())
    
for x in set(map(int, input().split())):
    b.add(x)
    
print(len(a - b))