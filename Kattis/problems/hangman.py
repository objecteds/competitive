s = set(list(input()))
permutation = list(input())
wrong = 0

for _ in permutation:
    if _ in s:
        s.remove(_)
    else:
        wrong += 1

    if len(s) == 0:
        break

if wrong < 10:
    print("WIN")
else:
    print("LOSE")
