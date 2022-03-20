w, h = int(input()), int(input())
grid = [[0 for i in range(w+2)] for j in range(h+2)]
maxv = 0

for row in range(1, h+1):
    line = list(map(int, input().split()))
    for col in range(1, w+1):
        grid[row][col] = line[col-1]

for row in range(1, h+1):
    for col in range(1, w+1):
        cur = grid[row][col]
        maxv = max(cur*grid[row+1][col+1], maxv)
        maxv = max(cur*grid[row+1][col-1], maxv)
        maxv = max(cur*grid[row-1][col+1], maxv)
        maxv = max(cur*grid[row-1][col-1], maxv)

print(maxv)