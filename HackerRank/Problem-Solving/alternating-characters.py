# do not use pypy, results in TLE
def alternatingCharacters(s):
    s = list(s)
    t = 0
    
    i = 1
    while i < len(s):    
        if s[i] == s[i-1]:
            s.pop(i)
            i -= 1  
            t += 1
        i += 1
        
    return t