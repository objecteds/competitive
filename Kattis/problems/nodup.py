words = []
repeat = False

s = input().split(' ')

for word in s:
    if word in words:
        repeat = True
    words.append(word)

if repeat == True:
    print("no")
else:
    print('yes')
