a, b = int(input()), int(input())

if a > 20 or b > 20:
	print(f"£{min(a, b)}.{max(a,b)}")
else:
	x, y = min(a, b), max(a, b)
	print(f"£{x}.{y if y > 9 else '0'+str(y)}")
	x, y = y, x
	print(f"£{x}.{y if y > 9 else '0'+str(y)}")
