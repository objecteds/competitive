import sys

n = int(sys.stdin.readline())
grid = []
ok = False

for i in range(n):
    s = sys.stdin.readline()
    grid.append(s)

for row in range(n):
    for column in range(n-5):
        check = grid[row][column:column+6]
        if check.count("#") >= 4:
            ok = True
            break
    if ok:
        break

if not ok:
    for row in range(n-5):
        for column in range(n):
            c1 = grid[row][column]
            c2 = grid[row+1][column]
            c3 = grid[row+2][column]
            c4 = grid[row+3][column]
            c5 = grid[row+4][column]
            c6 = grid[row+5][column]
            if [c1, c2, c3, c4, c5, c6].count("#") >= 4:
                ok = True
                break
    if not ok:
        for row in range(n-5):
            for column in range(n-5):
                d1 = "".join(grid[row+i][column+i] for i in range(6))
                d2 = "".join(grid[row+i][column+5-i] for i in range(6))
                if d1.count("#") >= 4 or d2.count("#") >= 4:
                    ok = True
                    break
if not ok:
    sys.stdout.write("No\n")
else:
    sys.stdout.write("Yes\n")
