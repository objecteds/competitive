n, m = map(int, input().split())
prev = list(map(int, input().split()))
years = 0
snowed = False

for i, j in enumerate(prev):
    if m >= j:
        snowed = True
        print("It hadn't snowed this early in " + str(i) + " years!")
        break

if not snowed:
    print("It had never snowed this early!")
