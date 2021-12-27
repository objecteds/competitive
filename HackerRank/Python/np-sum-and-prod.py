import numpy

n, m = map(int, input().split())
a = numpy.array([list(map(int, input().split())) for i in range(n)])

print(numpy.prod(numpy.sum(a, axis=0)))