s = list(input())
x = []

for _ in s:
    if _.isalpha():
        x.append(_)

print(len(set(x)))