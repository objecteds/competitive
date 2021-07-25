g, s, c = map(int, input().split())

power = g * 3 + s * 2 + c * 1

if power >= 0 and power < 2:
    print("Copper")
elif power >= 2 and power < 3:
    print("Estate or Copper")
elif power >= 3 and power < 5:
    print("Estate or Silver")
elif power >= 5 and power < 6:
    print("Duchy or Silver")
elif power >= 6 and power < 8:
    print("Duchy or Gold")
elif power >= 8:
    print("Province or Gold")