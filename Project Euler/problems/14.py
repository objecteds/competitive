a = 0
g = 0

for i in range(1, 1000000):
    n = i
    c = 0

    while n != 1:
        if n % 2 == 0:
            n /= 2
        else:
            n = 3*n + 1
        c += 1

    if c > g:
        g = c
        a = i
    
print(a)

