if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    l = []

    for i in range(x+1):
        for j in range(y+1):
            for k in range(z+1):
                elem = []
                elem.append(i)
                elem.append(j)
                elem.append(k)
                if sum(elem) != n:
                    l.append(elem)

    print(l)
