n = bin(int(input()))
n = str(n[2:-1])+str(n[-1])
n = n[::-1]
n = int(n, 2)
print(n)
