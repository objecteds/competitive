s = input().split()
check = "AEIOU"
ans = ""
for _ in s:
    for x in _:
        if x in check:
            ans += check[(check.find(x)+1)%5]
        else:
            ans += x
print(ans)
