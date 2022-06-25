s = input()
l = "how what why who when where".split()
while True:
	if s == "goodbye":
		print("see you!")
		break
	s = s.split()
	if s[-1][-1] == "?" or s[0] in l:
		print("not sure really")
	else:
		print("but why?")
	s = input()