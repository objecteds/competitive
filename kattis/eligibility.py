from datetime import date

n = int(input())

def dateConvert(s):
    y, m, d = list(map(int, s.split("/")))
    return date(y, m, d)

for i in range(n):
    name, secondary, birth, courses = input().split()
    secondary = dateConvert(secondary)
    birth = dateConvert(birth)
    courses = int(courses)

    if date(2010, 1, 1).__le__(secondary):
        print(name, "eligible")
    elif date(1991, 1, 1).__le__(birth):
        print(name, "eligible")
    elif courses >= 41:
        print(name, "ineligible")
    else:
        print(name, "coach petitions")

