th, tb, h, d = [int(input()) for i in range(4)]

t = (tb-th)*60-60-d-(h*35)
print(t if t > 0 else 0)