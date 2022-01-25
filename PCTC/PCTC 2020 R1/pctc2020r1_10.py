a, b, c, t = int(input()), int(input()), input().split('_')[1:-1], 0
for x in c:
  if len(x) > a:
    break
  t += 1
print(t if b >= t else b)