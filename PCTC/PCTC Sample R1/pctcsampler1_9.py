c = "<+&>".find(input())
print("".join(["<+&>"[i%4] for i in range(c, c+8)]))