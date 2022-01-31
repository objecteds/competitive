n, l = int(input()), []
while n != -1:
  l.append(n)
  n = int(input())
print(len([x for x in l if x >= l[0]])-1)