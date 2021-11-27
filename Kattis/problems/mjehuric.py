line = list(map(int, input().split()))

linesorted = sorted(line)

while line != linesorted:
    for i in range(len(line)):
        if i != 4:
            if line[i] > line[i+1]:
                line[i], line[i+1] = line[i+1], line[i]
                print(' '.join(str(x) for x in line))
