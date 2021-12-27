cube = lambda x: x ** 3

def fibonacci(n):
    if n == 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else: 
        l = [0, 1]
        for i in range(2, n):
            l.append(l[i-1] + l[i-2])
        return l

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))