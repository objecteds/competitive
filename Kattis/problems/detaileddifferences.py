n = int(input())
message = ""

for i in range(n):
    s1 = input()
    s2 = input()
    j = 0
    message += "{s1}\n{s2}\n".format(s1=s1, s2=s2)

    for j in range(len(list(s1))):
        if list(s1)[j] == list(s2)[j]:
            message += "."
        else:
            message += "*"

    message += "\n\n"

print(message)

    