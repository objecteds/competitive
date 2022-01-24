x, y, n = int(input()), int(input()), int(input())
a, b = [1, 2, 3, 4, 5, 6, 7, 8, 9], []
flag = True
c = 0

while c < n:
    if flag:
        for i in range(x):
            if len(a) == 0:
                break
            b.insert(0, a.pop(0))
        for i in range(y):
            if len(a) == 0:
                break
            b.insert(0, a.pop())
        if len(a) == 0:
            flag = False
            c += 1
    else:
        for i in range(x):
            if len(b) == 0:
                break
            a.insert(0, b.pop(0))
        for i in range(y):
            if len(b) == 0:
                break
            a.insert(0, b.pop())
        if len(b) == 0:
            flag = True
            c += 1

if a:
    print(a[0])
else:
    print(b[0])