n = 0
c = 0

while n > -1000 and c < 3:
	n += int(input())

	if n < 0:
		c += 1
	else:
		c = 0

print(n)