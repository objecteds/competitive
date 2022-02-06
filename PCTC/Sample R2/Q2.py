s, n = input(), int(input())
if len(s) > n:
  print("MORE")
elif len(s) < n:
  print("FEWER")
else:
  print("MATCH")