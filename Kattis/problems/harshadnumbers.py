n = int(input())
arr = map(int, list(str(n)))
sum = 0
harshad = 0

for _ in arr:
    sum += _

if n % sum != 0:
    while(True):
        n += 1
        arr = map(int, list(str(n)))
        sum = 0
        for _ in arr:
            sum += _
        if n % sum == 0:
            harshad = n
            break
else:
    harshad = n

print(harshad)

