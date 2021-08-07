# Problem Statement

You are setting up a book club and would like to discover what books your friends have not yet read.

Write a program to read in a list of `<book>:<friend>` pairs, one on each line. Each line indicates that the given book has already been read by that friend. A line might be repeated in the input due to data entry mistakes.

Your program should make a report of all the books that have been entered, showing all the friends who **have not** yet read each book.

Here's an example of what this should look like:

    Book read: Pride and Prejudice:Jenny
    Book read: A Tale of Two Cities:Mark
    Book read: Magician:Jenny
    Book read: The Lord of the Rings:Pavel
    Book read: Magician:Pavel
    Book read: 
    A Tale of Two Cities: Jenny, Pavel
    Magician: Mark
    Pride and Prejudice: Mark, Pavel
    The Lord of the Rings: Jenny, Mark

Some extra details:

* We've used a `:` character to separate each book name from the friend name, with no blank space surrounding. Book and friend names will not contain a `:`.
* Keep processing book data until a blank line is read.
* Output the book report in [lexicographic](https://en.wikipedia.org/wiki/Lexicographic_order) order (Python sort order). Each book name should only appear once in the report.
* If there are friends that have not read the book, output their names in lexicographic order, too, separated by a comma and a space. Otherwise, show `Everyone has read this!` instead of a list of names.

Here is another short examples:

    Book read: The Martian:Harry
    Book read: The Martian:Petra
    Book read: Lord of the Flies:Petra
    Book read: 
    Lord of the Flies: Harry
    The Martian: Everyone has read this!

© 2021 Grok Learning