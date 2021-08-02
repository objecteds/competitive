# Problem Statement

Let's make a program that figures out if there's a crowd of people nearby!

How many people make a crowd? We'll say **at least 30 people** are needed for a crowd.

But wait, *three's a crowd*, so **exactly 3 people** also make a crowd.

Here's an example of how your program should work:

    Number of people: 35
    There's a crowd here!

If there **are fewer than 30 people** and there **aren't exactly 3 people**, then it's not a crowd:

    Number of people: 4
    There's no crowd here!

Your program should ask the user for input and then use a *function* to help you decide if there's a crowd. We've started by defining a function for you, called `is_crowd`.

**Finish the function, ask the user for the number of people, call the function to decide if there's a crowd, then print the result!**

Here are some examples of how your function should work:

| **When called like this ...** | **... the function should return:** |
| ----------------------------- | ----------------------------------- |
| `is_crowd(3)` | `'a crowd'` |
| `is_crowd(30)` | `'a crowd'` |
| `is_crowd(2)` | `'no crowd'` |

© 2021 Grok Learning


