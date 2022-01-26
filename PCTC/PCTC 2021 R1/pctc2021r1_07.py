names = [input() for i in range(int(input()))]
eliminated = []

while names:
    names.sort()
    eliminator = names[0]
    eliminated.append(names.pop(0))
    for letter in eliminator:
        for name in names:
            if letter in name:
                eliminated.append(name)
                names.remove(name)

print(eliminated[-1])