d = dict()
l = []
for i in range(int(input())):
  x, y = input().split()
  d[y] = x
  l.append(y)
  
l.sort()

for i in range(len(l)):
  if d[l[i]] == "Percy":
    print(i+1)
    break
  