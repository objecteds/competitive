s = input()
arr = list(s)
new_arr = []

for i in range(len(arr)):
    if i != 0:
        if arr[i] != arr[i-1]:
            new_arr.append(arr[i])
    else:
        new_arr.append(arr[i])

print("".join(new_arr))