n = int(input())

while n != -1:
    speed = 0
    prev_s, prev_t = map(int, input().split())
    speed += prev_s * prev_t
    for i in range(n-1):
        s, t = map(int, input().split())
        speed += s * (t-prev_t)
        prev_s = s
        prev_t = t
    print(str(speed) + " miles")
    n = int(input())

