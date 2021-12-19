def cutTheSticks(arr):
    length_arr = []
    
    while len(arr) > 0:
        length_arr.append(len(arr))
        minimum = min(arr)
        arr = list(filter(lambda k: k != minimum, arr))
        
    return length_arr