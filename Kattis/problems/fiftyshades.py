n = int(input())
total = 0

for i in range(n):
    word = input().lower()
    if "pink" in word or "rose" in word:
        total += 1
    
if total > 0:
    print(total)
else:
    print("I must watch Star Wars with my daughter")