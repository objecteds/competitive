s = input()
answer = 1

letters = []

for letter in s:
    if letter in letters:
        answer = 0
    letters.append(letter)

print(answer)

