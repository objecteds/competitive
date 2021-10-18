import sys
count = 0

for line in sys.stdin:
    count += 1
    line = line.split()
    arr = []
    for i in range(1, int(line[0])+1):
        arr.append(int(line[i]))
    m1 = min(arr)
    m2 = max(arr)
    r = m2 - m1
    print("Case {}: {} {} {}".format(count, m1, m2, r))
