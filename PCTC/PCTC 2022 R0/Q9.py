while True:
    s = input()
    if len(s) == 5 and s[0] == "T" and s[1] == "H" and s[2:6].isdigit():
        print(s)
        break