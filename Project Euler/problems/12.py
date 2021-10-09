import math

i = 7 # minor time reduction since tri no. > 7

while True:
    i += 1
    s = (i * (i+1)) // 2
    
    f = 2
    for j in range(2, math.floor(math.sqrt(s) + 1)):
        if s % j == 0:
            if j*j == s:
                f += 1
            else:
                f += 2
    
    if f > 500:
        print(s)
        break