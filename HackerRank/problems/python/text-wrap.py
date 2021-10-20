def wrap(string, max_width):
    wrapper = textwrap.TextWrapper(width=max_width)
    word_list = wrapper.wrap(text=string)

    lastWrap = word_list[-1]

    for element in word_list:
        if element != lastWrap:
            print(element)

    return lastWrap
