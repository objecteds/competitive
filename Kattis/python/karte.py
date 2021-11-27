s = input()
n = len(s) // 3

p = 13
k = 13
h = 13
t = 13
card_arr = []

for i in range(n):
    card = s[i*3:i*3+3]
    card_arr.append(card)

    suit = card[0]

    if suit == "P":
        p -= 1
    elif suit == "K":
        k -= 1
    elif suit == "H":
        h -= 1
    elif suit == "T":
        t -= 1

if len(card_arr) != len(set(card_arr)):
    print("GRESKA")
else:
    print(p, k, h, t)

