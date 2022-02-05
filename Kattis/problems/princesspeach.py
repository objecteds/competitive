n, y = map(int, input().split())
l = set([int(input()) for i in range(y)])

for i in range(n):
    if i not in l:
        print(i)

print(f"Mario got {len(l)} of the dangerous obstacles.")
