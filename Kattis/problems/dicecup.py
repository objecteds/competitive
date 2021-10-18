a, b = input().split()

a = int(a)
b = int(b)

if a == b:
    print(a + 1)
else:
    n = abs(a - b) + 1
    s = min(a, b) + 1
    for i in range(s, s + n):
        print(i)
