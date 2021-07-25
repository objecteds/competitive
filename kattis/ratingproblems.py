n, k = input().split()
total = 0

n = int(n)
k = int(k)

for i in range(0, k):
    r = int(input())
    total += r

left = n - k

best = (total + left * 3) / n
worst = (total + left * -3) / n

print(worst, best)