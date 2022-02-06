x = "1"

for i in range(int(input())):
  s = ""
  cur = x[0]
  c = 1

  for _ in x[1:]:
    if _ == cur:
      c += 1
    else:
      s += str(c) + cur
      cur = _
      c = 1
  
  s += str(c) + cur
  x = s

print(x)