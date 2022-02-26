a, b, c = [int(input()) for i in range(3)]
if a + b == c or b + c == a or a + c == b:
  print("HAPPY CROWD")
else:
  print("UNHAPPY CROWD")
