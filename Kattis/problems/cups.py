d = {}

for i in range(int(input())):
    line = input().split()
    
    if line[0].isdigit():
        d[int(line[0])/2] = line[1]
    else:
        d[int(line[1])] = line[0]
    
for k in sorted(d.keys()):
    print(d[k])