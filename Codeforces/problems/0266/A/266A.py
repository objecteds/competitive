n = int(input())
l = list(input())

print(n - len([a for a, b in zip(l, l[1:] + [not l[-1]]) if a != b]))