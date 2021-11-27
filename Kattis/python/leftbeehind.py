n = input()

while n != "0 0":
    x, y = map(int, n.split())
    if x+y == 13:
        print("Never speak again.")
    elif x > y:
        print("To the convention.")
    elif y == x:
        print("Undecided.")
    else:
        print("Left beehind.")
    n = input()