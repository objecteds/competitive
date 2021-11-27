sum = 2

for i in range(eval(input())):
    sum += sum - 1

print(sum ** 2)