n = int(input())
t = 0

while True:
	h, w = int(input()), int(input())
	area = h*w

	if area > n:
		print(t)
		break
	else:
		n -= area 
		t += 1