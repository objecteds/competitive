p, n = map(int, input().split())
parts = []
index = 0

for i in range(0, n):
    w = input()
    
    if w not in parts:
        parts.append(w)
    
    if len(parts) == p and index == 0:
        index = i + 1
    
if len(parts) == p:
    print(index)
else:
    print("paradox avoided")