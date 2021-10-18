import math

h, m = map(int, input().split())

time = h * 60 + m
time -= 45

m = time % 60
h = math.floor(time/60)

if h < 0:
    h = 23

print(h, m)