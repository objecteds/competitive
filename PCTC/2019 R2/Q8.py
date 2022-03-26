def change(n):
    if (n < 0): return 999
    if (n == 0): return 0
    best = 999
    coins = [200, 100, 50, 20, 10, 5, 2, 1]
    for x in coins:
        best = min(best, change(n-x)+1)
    return best

t = 0
n = int(input())
while n != -1:
    t += n
    n = int(input())

t %= 60
print(change(t))