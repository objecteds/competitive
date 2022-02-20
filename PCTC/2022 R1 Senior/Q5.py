h, s, g = [int(input()) for i in range(3)]
if (h > 0 and g > 1) or (h > 0 and s > 0) or (s > 0 and g > 1):
    print("toasty")
else:
    print("cold") 

total = h + s + g

if h >= 1:
    total -= 1

if s >= 1:
    total -= 1

if g == 1:
    total -= 1
elif g >= 2:
    total -= 2

print(total)