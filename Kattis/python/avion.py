arr = []

for i in range(5):
    if "FBI" in input():
        arr.append(str(i+1))

if arr != []:
    print(" ".join(arr))
else:
    print("HE GOT AWAY!")