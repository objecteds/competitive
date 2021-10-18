n = int(input())
arr = []

for i in range(n):
    start, end = map(int, input().split())
    j = 0
    for j in range(start, end+1):
        if j not in arr:
            arr.append(j)
        
print(len(arr))