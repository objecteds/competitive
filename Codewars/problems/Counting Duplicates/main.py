def duplicate_count(text):
    c = 0
    for x in set(list(text.lower())):
        if list(text.lower()).count(x) > 1:
            c += 1
    return c
     