import numpy

n, m, p = map(int, input().split())

a = numpy.array([list(map(int, input().split())) for i in range(n)])
b = numpy.array([list(map(int, input().split())) for i in range(m)])

print(numpy.concatenate((a, b)))