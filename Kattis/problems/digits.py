n = input()

while n != "END":
    l = len(n)
    if l < 8 and int(n) == l:
        print(1)
    else:
        i = 2
        while True:
            c = len(str(l))
            if c == l:
                print(i)
                break
            else:
                i += 1
                l = c
    
    n = input()
