d = {'1':"st", '2':"nd", '3':"rd"}
x = str([input() for i in range(5)].index("Ellie")+1)
if x in d:
  print(x+d[x])
else:
  print(x+"th")