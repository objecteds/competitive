s = list(input())
t = list(input())

stone = 0

for c in t:
    if s[stone] == c:
        stone += 1
    
print(stone + 1)