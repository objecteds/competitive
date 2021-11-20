def utopianTree(n):
    h = 1
    
    for i in range(1, n+1):
        print(i)
        if i % 2 == 0:
            h += 1
        else:
            h *= 2
            
    return h