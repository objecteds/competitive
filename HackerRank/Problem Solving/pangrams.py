def pangrams(s):
    alphabet = list("abcdefghijklmnopqrstuvwxyz")
    s = s.lower()
    pangram = True
    
    for x in alphabet:
        if x not in s:
            pangram = False
            
    if not pangram:
        return "not pangram"
    else:
        return "pangram"