n = int(input())

while len(str(n)) != 1:
    prod = 1
    for _ in list(str(n)):
        _ = int(_)
        if _ != 0:
            prod *= _
    n = prod

print(n)
