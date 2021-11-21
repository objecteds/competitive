def angryProfessor(k, a):
    count = 0
    for x in a:
        if x <= 0:
            count += 1
    
    if count >= k:
        return "NO"
    else:
        return "YES"