arr = []
nums = []

for i in range(int(input())):
    arr.append(int(input()))

for j in range(1, arr[-1]+1):
    nums.append(j)

if nums == arr:
    print("good job")
else:
    for _ in nums:
        if _ not in arr:
            print(_)
