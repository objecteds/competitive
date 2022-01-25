for i in range(3):
  n = int(input())
  if n > 50 and n % 2 == 0:
    print("east")
  elif n > 50 and n % 2 != 0:
    print("west")
  elif n % 2 == 0:
    print("north")
  else:
    print("south")
  