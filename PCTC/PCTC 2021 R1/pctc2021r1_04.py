first, last = input().lower(), input().lower()
s = first[0].lower()+last[0]+last[-1]
print(s+str(len(first)) if len(set(s)) == len(s) else s+str(len(first))+'x')