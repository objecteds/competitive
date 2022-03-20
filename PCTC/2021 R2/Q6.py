s, n = input(), int(input())
ans = ""

while s != "":
    for i in range(n):
        s = s[1:] + s[0]
    ans += s[0]
    s = s[1:]

print(ans)