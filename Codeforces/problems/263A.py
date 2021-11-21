l = []
col = 0
row = 0

for i in range(5):
    l.append(input().split())

for x in l:
    if '1' in x:
        col = l.index(x)
        row = x.index('1')

moves = abs(col - 2) + abs(row - 2)

print(moves)