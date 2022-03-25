tc = int(input())
while tc:
    tc -= 1
    n = int(input())
    if n*(n+1)/2 % 2 == 0:
        print(n)
    else:
        print(n-1)