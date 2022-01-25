l = [int(input()) for i in range(4)]
print("NO" if len([l[i] for i in range(2, len(l)) if l[i] - l[i-1] != l[1] - l[0]]) > 0 else l[1] - l[0])