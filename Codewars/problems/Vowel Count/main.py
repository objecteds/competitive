def get_count(sentence):
    c = 0
    for x in sentence:
        if x in "aeiou":
            c += 1
    return c
