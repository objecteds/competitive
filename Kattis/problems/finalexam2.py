n = int(input())
ans = input()
correct = 0

for i in range(n-1):
    current = input()
    if current == ans:
        correct += 1
    ans = current

print(correct)