a, b, c = [int(input()) for i in range(3)]
if (a*a) + (b*b) > c*c:
  print(f"{a} squared plus {b} squared is greater than {c} squared")
elif (a*a) + (b*b) < c*c:
  print(f"{a} squared plus {b} squared is less than {c} squared")
else:
  print(f"{a} squared plus {b} squared is equal to {c} squared")