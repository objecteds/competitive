# Problem Statement

Your brother's soccer team had a big carnival over the weekend. Unfortunately, the final results have been lost, and all we have left is files of text commentary for each game noting who scored at what time. The commentary looks like this for each game:

    EASTS versus WESTS
    EASTS have scored 25:13
    WESTS have scored 26:38
    WESTS have scored 40:23
    WESTS have scored 42:01

The first line contains the name of the two teams that played in the form `<team1> versus <team2>`. After that are zero or more lines of the form `<team> have scored <timestamp>`

Write a program to read this commentary from a file called `commentary.txt` and output out the final result of the match. For the above file, your program should produce the following output:

    WESTS 3
    EASTS 1

The team names are each one word and should be printed exactly as they appear in the file. Only two teams are in each commentary, and the final result should list the winning team first. If the score is tied, you can list the teams in either order.

© 2021 Grok Learning