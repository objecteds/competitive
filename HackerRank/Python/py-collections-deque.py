from collections import deque

d = deque()

for i in range(int(input())):
    line = input().split()
    
    if line[0] == "pop":
        d.pop()
    elif line[0] == "popleft":
        d.popleft()
    else:
        s, n = line
        if s == "append":
            d.append(n)
        else:
            d.appendleft(n)
            
print(' '.join(list(d)))