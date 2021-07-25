n = int(input())

for i in range(n):
    x = input()
    if x == "P=NP":
        print("skipped")
    else:
        a, b = map(int, x.split("+"))
        print(str(a + b))