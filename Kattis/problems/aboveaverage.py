c = int(input())

while c:
    line = list(map(int, input().split()))
    n = line[0]
    grades = line[1:]
    avg = sum(grades) / n
    percentage = 0

    for grade in grades:
        if grade > avg:
            percentage += 1

    percentage = round(percentage / n * 100, 3)
    percentage = format(percentage, ".3f")

    print(f"{percentage}%")

    c -= 1