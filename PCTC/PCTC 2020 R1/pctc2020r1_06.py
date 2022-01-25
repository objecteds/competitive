d = {"hybrid": 120, "petrol": 150, "diesel": 180}
s = input()
if s not in d:
  print("$0")
else:
  if float(input()) >= 1.8:
    print(f"${d[s]+20}")
  else:
    print(f"${d[s]}")