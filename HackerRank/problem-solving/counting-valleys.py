def countingValleys(steps, path):
    level = 0
    valleys = 0
    for i in range(steps):
        if path[i] == 'D' and level == 0:
            valleys += 1
            level -= 1
        elif path[i] == 'D':
            level -= 1
        else:
            level += 1
    
    return valleys