n = int(input())

while n != 0:
    d = {}
    
    for i in range(n):
        line = input().split()
        name = line[0]
        
        for j in range(1, len(line)):
            item = line[j]

            if item not in d.keys():
                d[item] = []
                d[item].append(name)
            else:
                d[item].append(name)

    keys = sorted(d.keys())

    for key in keys:
        names = sorted(d[key])
        ans = key + ' '

        for name in names:
            ans += name + ' '

        print(ans.strip())

    n = int(input())
    