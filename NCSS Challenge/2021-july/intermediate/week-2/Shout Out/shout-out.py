sentence = input("Sentence: ").split()
shouted = 0

for word in sentence:
    if word.isupper():
        shouted += 1

print(f"Number of shouted words: {shouted}")