import math

s, t, n = map(int, input().split())
dline = input().split()
bline = input().split()
cline = input().split()

time = 0

for i in range(n+1):
    if i < n:
        time += int(dline[i])
        if time > int(cline[i]):
            time += int(cline[i])*math.ceil(time/int(cline[i])) - time
        else:
            time += int(cline[i]) - time
        time += int(bline[i])
    else:
        time += int(dline[i])

if time <= t - s:
    print("yes")
else:
    print("no")
