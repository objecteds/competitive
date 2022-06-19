def first_non_repeating_letter(string):
    d = dict()
    for x in string:
        x = x.lower()
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    for x in string:
        if d[x.lower()] == 1:
            return x
    return ''