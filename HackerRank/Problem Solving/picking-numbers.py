def pickingNumbers(a):
    a.sort()
    greatest = 0
    
    for _ in a:
        x = a.count(_)
        y = a.count(_+1)
        if x + y > greatest:
            greatest = x + y
            
    return greatest