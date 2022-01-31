import math
n = int(input())
if n < 8:
    print(8)
else:
    if n % 8 > 4:
        print(math.ceil(n/8)*8)
    else:
        print(math.floor(n/8)*8)
