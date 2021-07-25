nx = int(input())
ny = int(input())

if nx > 0 and ny > 0:
    print('1')
elif nx > 0 and ny < 0:
    print('4')
elif nx < 0 and ny > 0:
    print('2')
else:
    print('3')
