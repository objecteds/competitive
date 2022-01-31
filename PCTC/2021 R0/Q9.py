s = input()
i, c = 0, 0
seen = []

while -1 < i < len(s) and i not in seen:
	seen.append(i)
	if s[i] == 'A':
		i -= 3
	elif s[i] == 'B':
		i -= 2
	elif s[i] == 'C':
		i -= 1
	elif s[i] == 'D':
		i += 1
	elif s[i] == 'E':
		i += 2
	else:
		i += 3
	c += 1

if -1 < i < len(s):
	print("infinite")
else:
	print(c)