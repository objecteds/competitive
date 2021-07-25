n = int(input())
total = 0

for i in range(n):
    qaly = input()
    qaly = qaly.split()
    
    q = float(qaly[0])
    y = float(qaly[1])
    
    total += q*y

print(total)