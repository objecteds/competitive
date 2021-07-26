s = input().split(';')
n = 0

for i in s:
    i = i.split("-")
    start = int(i[0])
    end = int(i[1]) if len(i) == 2 else start
    diff = end - start + 1
    n += diff

print(n)