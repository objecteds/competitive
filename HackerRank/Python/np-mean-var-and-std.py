import numpy

n, m = map(int, input().split())
l = numpy.array([list(map(int, input().split())) for i in range(n)])

print(numpy.mean(l, axis=1))
print(numpy.var(l, axis=0))
print(round(numpy.std(l), 11))