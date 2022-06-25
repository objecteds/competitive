c, r = int(input()), int(input())
w, x, y, z = [], [], [], []
g = [list(input()) for i in range(r)]
l = []
t = 0

for row in range(r//2):
	temp = []
	for col in range(c//2):
		temp.append('1')
	l.append(temp)

for row in range(r//2):
	for col in range(c//2):
		if g[row][col] == '0':
			l[row][col] = '0'

for row in range(r//2, r):
	for col in range(c//2, c):
		if g[row][col] == '0':
			l[row-r//2][col-c//2] = '0'

for row in range(r//2):
	for col in range(c//2, c):
		if g[row][col] == '0':
			l[row][col-c//2] = '0'

for row in range(r//2, r):
	for col in range(c//2):
		if g[row][col] == '0':
			l[row-r//2][col] = 0

for x in l:
	for y in x:
		if y == '1':
			t += 1

print(t)