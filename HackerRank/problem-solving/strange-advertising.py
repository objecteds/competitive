import math

def viralAdvertising(n):
    shared = 5
    liked = math.floor(shared/2)
    likes = liked
    
    for i in range(n-1):
        shared = liked * 3
        liked = math.floor(shared/2)
        likes += liked
        
    return likes