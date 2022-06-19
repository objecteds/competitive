def find_it(seq):
    d = dict()
    for x in seq:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    for x in seq:
        if d[x] % 2 != 0:
            return x
    return -1
