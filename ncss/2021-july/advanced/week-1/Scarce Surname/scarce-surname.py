name = input("What is your surname? ").lower()
if name[0] == "q":
  print("You have an extremely rare surname!")
elif "q" in name:
  print("You have a rare surname!")
else:
  print("No Qs here.")