n, g = int(input()), int(input())
o = n//2
while n > 0 and g > 0:
  if n > o:
    n -= 2
  else:
    n -= 1
  g -= 1
print(n if n > 0 else 0) 