from itertools import product

a = list(map(int, input().split()))
b = list(map(int, input().split()))

products = list(product(a, b))

tuples = ""

for _ in products:
    tuples += str(_) + " "
    
print(tuples.rstrip())