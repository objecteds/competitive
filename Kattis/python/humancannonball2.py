import math

n = int(input())

for i in range(n):
    v, theta, x, h1, h2 = map(float, input().split())
    
    theta = math.radians(theta)

    t = x / (v * math.cos(theta))
    yt = v * t * math.sin(theta) - (0.5 * 9.81 * t * t)

    if yt >= h1 + 1 and yt <= h2 - 1:
        print("Safe")
    else:
        print("Not Safe")