n = int(input())

for i in range(n):
    s = input()
    if s.startswith("Simon says"):
        print(s[10:-1] + s[-1])