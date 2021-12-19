def hackerrankInString(s):
    s = list(s)
    h = list("hackerrank ")
    
    k = 0
    for i in range(len(s)):
        if s[i] == h[k]:
            k += 1
            
    if k == 10:
        return "YES"
    else:
        return "NO"