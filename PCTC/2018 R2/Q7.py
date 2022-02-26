s = input()
t = 0
r = 0
ok = True

for x in s:
  if x == "+":
    t += 5*3
  elif x == "-":
    t += 3
  elif x == "#":
    t -= 4
    r += 1
    if t < 0:
      ok = False
      break
      
if ok:
  print("\\")
else:
  print("#"*r)