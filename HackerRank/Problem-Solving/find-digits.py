def findDigits(n):
    c = 0
    
    for _ in [int(x) for x in list(str(n))]:
        if _ != 0 and n % _ == 0:
            c += 1
            
    return c