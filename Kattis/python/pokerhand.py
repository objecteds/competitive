cards = input().split()
mode = []

for _ in cards:
    mode.append(_[0])

print(mode.count(max(set(mode), key=mode.count)))
