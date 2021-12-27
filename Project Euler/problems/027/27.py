best = [0, 0, 0] # a, b, t

def is_prime(n):
    if n <= 3:
        return n > 1
    elif n % 2 == 0 or n % 3 == 0:
        return False
    
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6

    return True

for a in range(-1000, 1001):
    for b in range(-1000, 1001):
        t = 0
        n = 0

        while is_prime(n*n + a*n + b):
            t += 1
            n += 1

        if t > best[2]:
            best[0], best[1], best[2] = a, b, t

print(best[0] * best[1])