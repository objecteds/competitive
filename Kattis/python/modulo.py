arr = []

for i in range(10):
    mod = int(int(input()) % 42)
    if mod not in arr:
        arr.append(mod)

print(len(arr))