# Problem Statement

When would *beta* come before *alpha* in a dictionary? Well, it would if that dictionary used *no vowel sort*! In no vowel sort, strings are sorted as usual in lexicographical order, except that *vowels are ignored*. So *alpha* comes after *beta* — because *lph* comes after *bt*.

Write a function that takes a list of arbitrary strings. The function should return a list of the strings sorted using the "no vowel sort" sort order. Your input will not have any words containing only vowels. You should use the following template for your function, replacing `return the_list` with your code:

    def novowelsort(the_list):
        # TODO perform no vowel sort on `the_list`.
        return the_list

For the given example of *alpha* and *beta*, your function should act like this:

    >>> print(novowelsort(['alpha', 'beta']))
    ['beta', 'alpha']
    >>> print(novowelsort(['once', 'upon', 'abc', 'time', 'there', 'were', 'some', 'words']))
    ['abc', 'once', 'upon', 'some', 'there', 'time', 'were', 'words']

For the purposes of this question, vowels are the letters `a`, `e`, `i`, `o`, and `u` (and their uppercase variants).

© 2021 Grok Learning