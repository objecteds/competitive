arrogant_numbers = [3, 6, 7, 23, 25, 35, 39, 66, 68, 112, 119, 254, 259, 732, 737, 4565, 4663, 13330, 13730, 29880, 29998, 79670, 80015, 230054, 239068, 1534301, 1607352, 2060587, 21700891, 99167753, 99873125]

def find_personality(number):
  traits = ''
  # Find the traits of the number
  if number % 2 != 0:
    traits = traits + 'odd '
  # Check for other traits after this
  if number > 10000:
      traits += "excessive "
  if '3' in str(number):
      traits += "irksome "
  if number in arrogant_numbers:
      traits += "arrogant "

  return traits

# Write the rest of your program after this
line = list(map(int, input("Enter numbers: ").split()))
dull = 0
for _ in line:
    traits = find_personality(_)
    if traits == '':
        dull += 1
    else:
        print(f"{_} is an {traits}number.")
print(f"Dull numbers: {dull}")


