s = input()
a = ""
d = {'6': '350', '7': '50', '8': '3505', '9': '35052'}

for x in s:
    if x in d:
        a += d[x]
    else:
        a += x

print(a)