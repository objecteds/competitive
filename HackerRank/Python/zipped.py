n, x = map(int, input().split())
l = []

for i in range(x):
    l.append(list(map(float, input().split())))
    
for _ in list(zip(*l)):
    print(sum(_)/x)