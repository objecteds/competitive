s1, s2 = set(), set()
k = int(input())
line = list(map(int, input().split()))

for x in line:
    if x in s1:
        s2.add(x)
    else:
        s1.add(x)
    
print(list(s1-s2)[0])
