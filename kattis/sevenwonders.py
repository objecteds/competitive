s = input()
bonus = False

bonusc = 7
tc = 0
cc = 0
gc = 0

for card in s:
    if card == "T":
        tc += 1
    elif card == "C":
        cc += 1
    else:
        gc += 1

total = tc ** 2 + cc ** 2 + gc ** 2

if tc <= cc and tc <= gc and tc != 0:
    bonus = True
    bonusc *= tc
elif cc <= tc and cc <= gc and cc != 0:
    bonus = True
    bonusc *= cc
elif gc <= tc and gc <= cc and gc != 0:
    bonus = True
    bonusc *= gc
else:
    bonus = False

if (bonus):
    print(str(total + bonusc))
else:
    print(str(total))