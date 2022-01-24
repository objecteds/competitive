l = [int(input()) for i in range(5)]
maxv = 0
for i in range(len(l)):
    maxv = max(maxv, 10-l[i]+l[i-1])
print(maxv)