def theLoveLetterMystery(s):
    k = len(s) // 2
    first = s[:k]
    second = s[-k:][::-1]
    t = 0
    
    for i in range(len(first)):
        t += abs(ord(first[i]) - ord(second[i]))
        
    return t