def jumpingOnClouds(c):
    jumps = 0
    
    i = 0
    while i < len(c)-2:
        if c[i+2] == 0:
            i += 2
        else:
            i += 1
        jumps += 1
        
    if i == len(c)-2:
        jumps += 1
    
    return jumps