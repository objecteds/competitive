def is_crowd(people):
  # Write your function here.
  if people < 30 and people != 3:
      print("There's no crowd here!")
  else:
      print("There's a crowd here!")

# Write the rest of your program here.
people = int(input("Number of people: "))
is_crowd(people)