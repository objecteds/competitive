def cups_to_grams(cups, density):
  # Convert cups to grams here.
  # The density is in grams-per-cup.
  grams = str(round(cups * density, 1))
  return grams


# Write the rest of your program here
food = input("What food? ")
cups = float(input("How much in cups? "))
density = float(input("How many grams per cup? "))

print(str(cups) + " cups of " + food + " is " + cups_to_grams(cups,density) + " grams.")