import math

def find_next_square(sq):
    if round(math.sqrt(sq))**2 == sq:
        return (math.sqrt(sq)+1)**2
    return -1
