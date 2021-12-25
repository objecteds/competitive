n = int(input())
s = set(map(int, input().split()))

for i in range(int(input())):
    f = input().split()
    if (f[0] == "pop"):
        s.pop()
    elif (f[0] == "remove"):
        s.remove(int(f[-1]))
    else:
        s.discard(int(f[-1]))
        
print(sum(s))