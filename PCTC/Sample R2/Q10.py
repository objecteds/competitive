n = int(input())
c = 0

while str(n) != str(n)[::-1]:
  c += 1
  n += int(str(n)[::-1])

print(c)