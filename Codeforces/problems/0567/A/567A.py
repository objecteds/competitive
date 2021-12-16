n = int(input())
line = list(map(int, input().split()))

for i in range(n):
    if i == 0:
        minimum, maximum = abs(line[i+1] - line[i]), abs(line[-1] - line[i])
    elif i == n-1:
        minimum, maximum = abs(line[i] - line[i-1]), abs(line[i] - line[0])
    else:
        minimum, maximum = min(abs(line[i-1] - line[i]), abs(line[i+1] - line[i])), max(abs(line[i] - line[-1]), abs(line[i] - line[0]))

    print(minimum, maximum)

