n, m = map(int, input().split())
t = 0
arr = list(map(int, input().split()))
a = set(map(int, input().split()))
b = set(map(int, input().split()))

for i in arr:
    if i in a:
        t += 1
    if i in b:
        t -= 1
        
print(t)