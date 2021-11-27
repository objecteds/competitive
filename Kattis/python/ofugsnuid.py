n = int(input())
arr = []

for i in range(n):
    arr.append(input())

arr = arr[::-1]

for _ in arr:
    print(_)