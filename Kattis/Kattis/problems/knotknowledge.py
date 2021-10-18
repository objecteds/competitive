n = int(input())
learn = []
know = []
line1 = input().split()
line2 = input().split()

for i in range(n):
    learn.append(line1[i])

for j in range(n-1):
    know.append(line2[j])

missing = ""

for _ in learn:
    if _ not in know:
        missing = _

print(missing)