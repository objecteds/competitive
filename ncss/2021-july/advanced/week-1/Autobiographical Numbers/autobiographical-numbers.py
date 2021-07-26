n = input("Number: ")
ndict = {'0': 0, '1': 0, '2': 0, '3': 0, '4': 0, '5': 0, '6': 0, '7': 0, '8': 0, '9': 0}
auto = True
vlist = []

if len(n) > 10:
    auto = False
else:
    for num in n:
        if num in ndict:
            ndict[num] += 1
        else:
            ndict[num] = 1
    
    for i in range(len(n)):
        val = str(i)
        key = ndict[val]
        vlist.append(str(key))

    res = ''.join(vlist)

    if res != str(n):
        auto = False
    
if auto == True:
    print(str(n) + " is autobiographical.")
else:
    print(str(n) + " is not autobiographical.")
