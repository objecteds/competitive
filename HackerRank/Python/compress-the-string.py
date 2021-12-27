from itertools import groupby

s = input()
l = []

for k, g in groupby(s):
    l.append(tuple([len(list(g)), int(k)]))
    
ans = ""

for x in l:
    ans += f"({x[0]}, {x[1]}) "
    
print(ans)