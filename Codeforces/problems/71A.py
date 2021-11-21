for i in range(int(input())):
    s = input()
    
    if len(s) > 10:
        n = s[0] + str(len(s)-2) + s[-1]
        print(n)
    else:
        print(s)