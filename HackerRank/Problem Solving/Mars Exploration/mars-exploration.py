def marsExploration(s):
    s = list(s)
    t = 0
    
    for i in range(0, len(s), 3):
        if s[i] != "S":
            t += 1
        if s[i+1] != "O":
            t += 1
        if s[i+2] != "S":
            t += 1
    
    return t