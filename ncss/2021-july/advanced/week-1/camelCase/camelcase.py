def to_camel(ident):
    ident_list = ident.split("_")
    res = []
    for word in ident_list:
        if word == ident_list[0]:
            res.append(word)
        else:
            letters = []
            for letter in word:
                letters.append(letter)
            letters[0] = letters[0].upper()
            res_word = ""
            for ele in letters:
                res_word += ele
            res.append(res_word)

    ident = ""
    for ele in res:
        ident += ele
    
    return ident

if __name__ == '__main__':
    print(to_camel('foo'))
    print(to_camel('raw_input'))
    print(to_camel('num2words'))
    print(to_camel('num_to_SMS'))