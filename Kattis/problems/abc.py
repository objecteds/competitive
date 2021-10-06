abc = list(map(int, input().split()))
s = list(input())

abc.sort()
ans = []

for _ in s:
    if _ == "A":
        ans.append(str(abc[0]))
    elif _ == "B":
        ans.append(str(abc[1]))
    else:
        ans.append(str(abc[2]))

print(" ".join(ans))

