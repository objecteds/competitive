s = input()
l, u, o, e = [], [], [], []

for x in s:
    if x.isalpha():
        if x.islower():
            l.append(x)
        else:
            u.append(x)
    else:
        if int(x) % 2 != 0:
            o.append(x)
        else:
            e.append(x)
            
print(''.join(sorted(l) + sorted(u) + sorted(o) + sorted(e)))