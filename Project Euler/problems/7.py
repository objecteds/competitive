'''
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
'''

n = 999999 # arbitrary number just to define a range
count = 0
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
        if count == 10000:
            print(p) # 104743
            break
        else:
            count += 1