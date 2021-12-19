def kangaroo(x1, v1, x2, v2):
    if v1 > v2 and (x1 - x2) % (v2 - v1) == 0:
        return "YES"
    else:
        return "NO"
