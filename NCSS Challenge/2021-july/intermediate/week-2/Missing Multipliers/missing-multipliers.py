times = int(input("Times table: "))
step = int(input("Step: "))

for i in range(3, 13, step):
    multiple = times * i
    print(f"{times} x [ ] = {multiple}")