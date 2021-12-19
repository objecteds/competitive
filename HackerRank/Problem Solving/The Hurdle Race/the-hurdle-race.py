def hurdleRace(k, height):
    l = [0]
    for x in height:
        if x-k >= 0:
            l.append(x-k)
    
    return max(l)