n = int(input())
ans = list(input())
scores = [0, 0, 0]
a = "ABC"
b = "BABC"
g = "CCAABB"

for i in range(0, n):
    if ans[i] == a[i%len(a)]:
        scores[0] += 1
    if ans[i] == b[i%len(b)]:
        scores[1] += 1
    if ans[i] == g[i%len(g)]:
        scores[2] += 1

highest = max(scores)
print(highest)

if scores[0] == highest:
    print("Adrian")
if scores[1] == highest:
    print("Bruno")
if scores[2] == highest:
    print("Goran")