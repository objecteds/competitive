found = False

for i in range(int(input())):
    k = int(input())
    s = input()
    m = []
    for j in range(k):
        m.append(input())
    if "pea soup" in m and "pancakes" in m:
        print(s)
        found = True
        break

if not found:
    print("Anywhere is fine I guess")