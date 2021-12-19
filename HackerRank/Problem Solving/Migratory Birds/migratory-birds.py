def migratoryBirds(arr):
    arr.sort()
    d = {}
    for x in arr:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1

    return max(d, key=d.get)
