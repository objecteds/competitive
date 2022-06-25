a, b = int(input()), int(input())
x, y = input(), input()
g = [[' ' for i in range(a)] for j in range(a)]

for row in range(a):
	for col in range(a):
		if row == 0 or row == a-1 or col == 0 or col == a-1:
			g[row][col] = x

test = (a-b)//2

for row in range(test, a-test):
	for col in range(test, a-test):
		g[row][col] = y

for x in g:
	print("".join(x))