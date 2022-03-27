bank, years, x, y = [int(input()) for i in range(4)]
og = bank
made = 0

for i in range(years):
    bank += (bank // x) * y
    
print(f"${bank - og}")