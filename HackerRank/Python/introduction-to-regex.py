t = int(input())

for i in range(t):
    try:
        n = input()
        x = float(n)
        print("True" if len(str(n)) > 2 else "False")
    except:
        print("False")
