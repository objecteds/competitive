s = input()
upper = []

for char in s:
    if char.isupper():
        upper.append(char)

short = ''.join(upper)

print(short)