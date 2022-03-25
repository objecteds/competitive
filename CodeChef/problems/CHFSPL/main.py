tc = int(input())
while tc:
    tc -= 1
    l = sorted(list(map(int, input().split())))
    print(l[1]+l[2])

