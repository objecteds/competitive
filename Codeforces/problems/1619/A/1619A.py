t = int(input())

for i in range(t):
    s = input()
    mid = len(s) // 2
    if s[:mid] == s[mid:]:
        print("YES")
    else:
        print("NO")