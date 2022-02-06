s = input()

while s != s[::-1]:
  flag = False

  for i in range(0, len(s)):
    n = s[0:i]+s[i+1:]
    if n == n[::-1]:
      flag = True
      s = n
      break

  if flag:
    break

  s = s[1:]
  
print(s)