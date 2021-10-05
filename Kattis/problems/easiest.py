n = int(input())

while n != 0:
    sn = 0
    for _ in list(str(n)):
        sn += int(_)

    p = 10
    np = n * p
    snp = 0

    while sn != snp:
        p += 1
        np = n * p
        snp = 0

        for x in list(str(np)):
            snp += int(x)

    print(p)

    n = int(input())