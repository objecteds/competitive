alphabet = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")

c = list(input())
k = list(input())

for i in range(len(c)):
    letter = alphabet.index(c[i])
    shift = alphabet.index(k[i])

    if i % 2 != 0:
        if letter+shift < len(alphabet):
            c[i] = alphabet[letter+shift]
        else:
            c[i] = alphabet[letter+shift-len(alphabet)]
    else:
        if letter-shift >= 0:
            c[i] = alphabet[letter - shift]
        else:
            c[i] = alphabet[letter-shift+len(alphabet)]

print("".join(c))
    