n = int(input())
nums = input().split()
count = 0

for i in range(n):
    if int(nums[i]) < 0:
        count += 1

print(count)