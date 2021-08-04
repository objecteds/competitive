# Problem Statement

When programming in any programming language, one task which the developer always has to consider, irrespective of the language, is what to name their identifiers (variables, functions, classes, etc). There are a [lot of thoughts](https://en.wikipedia.org/wiki/Naming_convention_(programming)) about what makes a good identifier name.

Different languages have different conventions for naming their identifiers. In Python for example, if a function contains more than one word, the words are usually separated using underscores. Other languages have different conventions. Java, for example, uses what is called [camelCase](https://en.wikipedia.org/wiki/Camel_case), where no separator is used between the multiple words, but instead the first letter of each new word is converted to uppercase. The very first letter of the identifier however is left in lowercase. So for example, there is a method in Java called `toString`.

Your task here is to write a Python function called `to_camel`, which takes as input a single string which is a Python variable name. Your function should return the camel case equivalent of the input string. Here are some example uses of your function:

    >>> print(to_camel('foo'))
    foo
    >>> print(to_camel('raw_input'))
    rawInput
    >>> print(to_camel('num2words'))
    num2words
    >>> print(to_camel('num_to_SMS'))
    numToSMS

There will not be any more than one underscore in a row in the variable names tested, nor will the very first character in the string be an underscore.

© 2021 Grok Learning