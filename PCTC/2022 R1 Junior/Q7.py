apples, oranges = 50, 50
while apples > 0 and oranges > 0:
  if input() == "APPLES":
    apples -= int(input())
  else:
    oranges -= int(input())
print(apples if apples > 0 else oranges)