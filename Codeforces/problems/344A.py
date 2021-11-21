# use python, this results in TLE on pypy

n = int(input())
l = [input() for i in range(n)]
print(len([a for a, b in zip(l, l[1:] + [not l[-1]]) if a != b]))