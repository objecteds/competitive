n = int(input())

for i in range(n):
    nums = input().split()
    r = int(nums[0])
    e = int(nums[1])
    c = int(nums[2])

    if r < (e - c):
        print('advertise')
    elif r > (e - c):
        print('do not advertise')
    else:
        print('does not matter')


