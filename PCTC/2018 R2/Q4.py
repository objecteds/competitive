yes, no = 0, 0
for i in range(int(input())):
  s = input()
  if s == "YES":
    yes += 1
  elif s == "NO":
    no += 1
  
print("YES", yes)
print("NO", no)