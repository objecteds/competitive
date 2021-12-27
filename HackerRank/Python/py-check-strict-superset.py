a = set(map(int, input().split()))
found = False

for i in range(int(input())):
    n = set(map(int, input().split()))
    if a != n and a.issuperset(n):
        found = True
        continue
    else:
        found = False
        print(False)
        break
        
if found:
    print(True)