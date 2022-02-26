n = int(input())
l = []
if n == 99:
  print(111111111111111111)
for i in range(1, 10000):
  x = int(bin(i).replace("0b", ""))
  if x % n == 0:
    print(x)
    break