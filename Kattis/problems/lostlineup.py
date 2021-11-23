n = int(input())
l = list(map(int, input().split()))
l = sorted(range(len(l)), key=lambda k: l[k])

for i in range(len(l)):
    l[i] += 2

print("1 " + " ".join(list(map(str, l))))