s = input()
k = 1
while not str(k*k).endswith(s):
    k += 1
print(k*k)