r, s = map(int, input().split())
n = int(input())
t = 0
l = [s for i in range(r)]

for i in range(n):
    required = int(input())
    for j in range(len(l)):
        if l[j] >= required:
            t += required
            l[j] -= required
            break
            
print(t)