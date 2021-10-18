n = int(input())
line = input().split()
count = 0
isFishy = False

for i in range(n):
    if line[i].isdigit():
        if int(line[i]) == count + 1:
            count += 1
        else:
            isFishy = True
    elif line[i] == "mumble":
        count += 1

if isFishy:
    print("something is fishy")
else:
    print("makes sense")
    