n = int(input())
unis = []
count = 0

print("---")
for i in range(0, n):
    line = input()
    uni, team = line.split()

    if count < 12:
        if uni in unis:
            count += 0
        else:
            print(line)
            count += 1

        unis.append(uni)
    else:
        count += 0
