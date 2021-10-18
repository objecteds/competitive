d = {n:0 for n in range(0,1001)}

d[0] = 0
d[1] = 3
d[2] = 3
d[3] = 5
d[4] = 4
d[5] = 4
d[6] = 3
d[7] = 5
d[8] = 5
d[9] = 4
d[10] = 3
d[11] = 6
d[12] = 6
d[13] = 8
d[14] = 8
d[15] = 7
d[16] = 7
d[17] = 9
d[18] = 8
d[19] = 8
d[20] = 6
d[30] = 6
d[40] = 5
d[50] = 5
d[60] = 5
d[70] = 7
d[80] = 6
d[90] = 6
d[1000] = 11

for i in range(21,100):
	tens = int(i/10)*10
	ones = i - tens
	d[i]  = d[tens]+d[ones]


for i in range(100,1000):
	hundreds = int(i/100)
	t_ones = i - hundreds*100
	if t_ones == 0:
		d[i] = d[hundreds] + 7
	else:
		d[i] = d[hundreds] + 10 + d[t_ones]

print(sum(d.values()))



