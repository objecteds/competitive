j, s = input(), input()
d = {"paper": "rock", "scissors": "paper", "rock": "scissors"}
if j == s:
    j, s = int(input()), int(input())
    print(f"{j+1}-{s+1}")
else:
    if s == d[j]:
        print("5-0")
    else:
        print("0-5")
