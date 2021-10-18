time = 0
attempted = []
solved = []

s = input()

while s != "-1":
    m, p, v = s.split()
    m = int(m)

    if v == "right":
        solved.append(p)
        if p not in attempted:
            time += m
        else:
            time += m + (20 * attempted.count(p))
    else:
        attempted.append(p)

    s = input()

print(len(solved), time)



