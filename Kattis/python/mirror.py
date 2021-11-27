test = 0

for i in range(int(input())):
    test += 1
    r, c = map(int, input().split())
    arr = []
    mirror = []
    for j in range(r):
        arr.append(list(input()))
    for k in reversed(range(r)):
        tmp = []
        for l in reversed(range(c)):
            tmp.append(arr[k][l])
        mirror.append(list(tmp))
    
    print("Test {}".format(test))

    for _ in mirror:
        print("".join(_))
    
            