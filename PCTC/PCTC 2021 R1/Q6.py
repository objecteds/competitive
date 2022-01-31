l = [int(input()) for i in range(20)]
t = 0
for i in range(20):
    if i == 0 and l[0] == 0 and l[1] == 0:
        l[0] = 1
        t += 1
    elif i == 19 and l[19] == 0 and l[18] == 0:
        l[19] = 1
        t += 1
    else:
        if l[i-1] == l[i] == l[i+1] == 0:
            l[i] = 1
            t += 1
print(t)