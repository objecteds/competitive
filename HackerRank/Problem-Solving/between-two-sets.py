def getTotalX(a, b):
    count = 0
    for i in range(1, b[-1]+1):
        accepted = True
        for _ in a:
            if i % _ != 0:
                accepted = False
        for _ in b:
            if _ % i != 0:
                accepted = False

        if accepted:
            print(i)
            count += 1

    return count
