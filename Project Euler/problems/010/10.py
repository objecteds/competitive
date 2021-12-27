'''
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
'''

# ohohoh sieve of eratosthenes time
n = 2000000
total = 0
prime = [True for i in range(n + 1)]
p = 2

while (p * p) <= n:
    if prime[p] == True:
        for i in range(p * 2, n + 1, p):
            prime[i] = False
        
    p += 1
    
prime[0] = False
prime[1] = False

for p in range(n + 1):
    if prime[p]:
        total += p

print(total)