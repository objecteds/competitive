def gemstones(arr):
    alphabet = list('abcdefghijklmnopqrstuvwxyz')
    t = 0
    
    for x in alphabet:
         if [x in arr[i] for i in range(len(arr))].count(True) == len(arr):
            t += 1
            
    return t