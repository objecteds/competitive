w = int(input())
n = int(input())
t = 0

for i in range(n):
    wi, le = map(int, input().split())
    t += wi * le

print(str(int(t/w)))