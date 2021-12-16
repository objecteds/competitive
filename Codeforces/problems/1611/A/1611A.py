for i in range(int(input())):
    n = input()
    l = list(n)
    n = int(n)
     
    has_even = False
     
    if n % 2 == 0:
        print(0)
    elif int(l[0]) % 2 == 0:
        print(1)
    else:
        for x in l:
            if int(x) % 2 == 0:
                has_even = True
     
        if has_even:
            print(2)
        else:
            print(-1)