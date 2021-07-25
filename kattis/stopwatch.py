n = int(input())
running = False
t1 = 0
t2 = 0

for i in range(n):
    t3 = int(input())
    if running:
        t1 += t3 - t2
    
    t2 = t3
    running = not running

if running:
    print('still running')
else:
    print(t1)
    

        