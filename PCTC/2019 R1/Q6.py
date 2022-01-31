a, b = int(input()), int(input())
if a >= 20 and b >= 3:
  print("A")
elif a < 20 and b >= 3:
  print("B")
elif b < 3 and a >= 20:
  print("C")
else:
  print("D")
