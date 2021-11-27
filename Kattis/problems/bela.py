n, b = input().split()
n = int(n)
points = 0

for i in range(0, n * 4):
    number, suit = input()

    nd_dict = {
        'A': 11,
        'K': 4,
        'Q': 3,
        'J': 2,
        'T': 10,
        '9': 0,
        '8': 0,
        '7': 0
    }

    d_dict = {
        'A': 11,
        'K': 4,
        'Q': 3,
        'J': 20,
        'T': 10,
        '9': 14,
        '8': 0,
        '7': 0
    }

    if suit == b:
        points += d_dict[number]
    else:
        points += nd_dict[number]

print(points)