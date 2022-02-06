l = list(map(int, input().split()))
t = l[0] if l[0] != 13 else 0

for i in range(1, len(l)):
  if l[i-1] != 13 and l[i] != 13:
    t += l[i]

print(t)