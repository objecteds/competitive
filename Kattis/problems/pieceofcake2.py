n, h, v = map(int, input().split())

arr = [h*v*4, (n-v)*h*4, (n-h)*v*4, (n-h)*(n-v)*4]
arr.sort()

print(arr[-1])

