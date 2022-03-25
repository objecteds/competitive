tc = int(input())
while tc:
    tc -= 1
    l, r = map(int, input().split())
    print(2*(r-l)+1)