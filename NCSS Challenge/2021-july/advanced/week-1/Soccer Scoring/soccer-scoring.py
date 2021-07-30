a_score = 0
b_score = 0

with open('commentary.txt') as f:
    for line in f:
        line = line.strip()
        if "versus" in line:
            global a, b
            a, b = map(str.strip, line.split("versus"))
        else:
            if line.split()[0] == a:
                a_score += 1
            else:
                b_score += 1

if a_score > b_score:
    print(a + " " + str(a_score))
    print(b + " " + str(b_score))
else:
    print(b + " " + str(b_score))
    print(a + " " + str(a_score))
                

