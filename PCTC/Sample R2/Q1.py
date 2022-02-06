x, y, z = [float(input()) for i in range(3)]
if x < y < z:
  print("UP")
elif x > y > z:
  print("DOWN")
else:
  print("WOBBLY")