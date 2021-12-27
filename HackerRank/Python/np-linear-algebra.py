import numpy

n = int(input())
l = numpy.array([list(map(float, input().split())) for i in range(n)])

print(round(numpy.linalg.det(l), 2))