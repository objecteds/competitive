def funnyString(s):
    rev = s[::-1]
    l = []
    funny = True
    
    for i in range(1, len(s)):
        l.append(abs(ord(s[i]) - ord(s[i-1])))
    
    for i in range(1, len(rev)):
        if abs(ord(rev[i]) - ord(rev[i-1])) != l[i-1]:
            funny = False
            
    return "Funny" if funny else "Not Funny"