x = int(input())
n = int(input())
availmb = x * n

for i in range(n):
    p = int(input())
    availmb -= p

availmb += x

print(availmb)