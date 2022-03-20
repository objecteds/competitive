g = [["." for i in range(21)] for j in range(21)]
maxx, minx, maxy, miny = -999, 999, -999, 999

for i in range(int(input())):
    x, y, c = input().split()
    x, y = int(x), int(y)
    g[10-y][10+x] = c
    maxx, minx, maxy, miny = max(x, maxx), min(x, minx), max(y, maxy), min(y, miny)

for y in reversed(range(miny, maxy+1)):
    s = ""
    for x in range(minx, maxx+1):
        s += g[10-y][10+x]
    print(s)