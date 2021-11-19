from collections import Counter

shoes = int(input())
sizes = Counter(list(map(int, input().split())))
customers = int(input())
earnings = 0

for i in range(customers):
    size, price = map(int, input().split())
    if size in sizes and sizes[size] > 0:
        sizes[size] -= 1
        earnings += price

print(earnings)