for i in range(int(input())):
    n = input()
    try:
        n = int(n)
        if len(str(n)) == 10:
            if str(n)[0] == '7' or str(n)[0] == '8' or str(n)[0] == '9':
                print("YES")
                continue
        print("NO")
    except:
        print("NO")