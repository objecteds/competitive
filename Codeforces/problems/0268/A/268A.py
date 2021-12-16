n = int(input())
t = 0

h_list = []
g_list = []

for i in range(n):
    h, g = map(int, input().split())
    h_list.append(h)
    g_list.append(g)

for x in h_list:
    t += g_list.count(x)

print(t)
