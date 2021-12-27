for i in range(int(input())):
    n = input()
    a = set(map(int, input().split()))
    n = input()
    b = set(map(int, input().split()))
    
    print(a.issubset(b))