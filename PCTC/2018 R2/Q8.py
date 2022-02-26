p, t, w = map(int, input().split())
l = [chr(i+65) for i in range(p)]
cur = 0
last = ""
for i in range(w):
    cur += t
    if len(l) == 0:
        break
    cur %= len(l)
    last = l.pop(cur)
    cur -= 1
    
print(last)