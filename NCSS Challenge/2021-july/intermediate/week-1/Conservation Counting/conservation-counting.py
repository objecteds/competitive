s = input("Which plant did you survey? ")
n = int(input("Count: "))

if "fern" in s.lower():
    print("Fantastic! Keep looking for ferns!")
elif n < 6:
    print("That's low. We'll put " + s.lower() + " on the watch list.")
else:
    print("Great! Recorded " + str(n) + " " + s.lower() + "s in this area.")