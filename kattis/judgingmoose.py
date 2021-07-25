l, r = map(int, input().split())

if l == r and l != 0:
    x = l * 2
    print("Even " + str(x))
elif l < r:
    x = r * 2
    print("Odd " + str(x))
elif l > r:
    x = l * 2
    print("Odd " + str(x))
else:
    print("Not a moose")
