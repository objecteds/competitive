n = int(input())
s = set(map(int, input().split()))

for i in range(int(input())):
    c = input().split()
    if c[0] == "update":
        s.update(set(map(int, input().split())))
    elif c[0] == "intersection_update":
        s.intersection_update(set(map(int, input().split())))
    elif c[0] == "difference_update":
        s.difference_update(set(map(int, input().split())))
    else:
        s.symmetric_difference_update(set(map(int, input().split())))
        
print(sum(s))