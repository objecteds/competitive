n = int(input())
l = list(map(int, input().split()))

print(all([x > 0 for x in l]) and any([str(x)[::-1] == str(x) for x in l]))