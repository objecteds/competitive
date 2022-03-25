tc = int(input())
while tc:
    tc -= 1
    n, s = map(int, input().split())
    if n >= s:
        print(s)
    else:
        print(n*2-s)

