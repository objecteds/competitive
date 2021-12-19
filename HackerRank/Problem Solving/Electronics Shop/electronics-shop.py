def getMoneySpent(keyboards, drives, b):
    l = []
    for board in keyboards:
        for drive in drives:
            if board + drive <= b:
                l.append(board + drive)
    
    if len(l) == 0:
        return -1
    else:
        return max(l)