import math

e, f, c = map(int, input().split())
bottles = e + f
sodas = math.floor(bottles / c)
bottles %= c
bottles += sodas

new_sodas = 0

while bottles >= c:
    new_sodas = math.floor(bottles / c)
    sodas += new_sodas
    bottles %= c
    bottles += new_sodas

print(sodas)