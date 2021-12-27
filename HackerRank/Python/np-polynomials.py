import numpy

l = numpy.array(list(map(float, input().split())))
x = int(input())

print(numpy.polyval(l, x))