d = dict()
best = 0

for i in range(3):
    name, age = input().split()
    age = int(age)
    best = max(best, age)
    d[age] = name

bestn = d[best]

top = "|" + "NAME".ljust(len(bestn)) + "|" + "AGE".ljust(len(str(best))) + "|"
mid = "|" + "-"*len("NAME".ljust(len(bestn))) + "|" + "-"*len("AGE".ljust(len(str(best)))) + "|"
bottom = "|" + bestn.ljust(len("NAME".ljust(len(bestn)))) + "|" + str(best).ljust(len("AGE".ljust(len(str(best))))) + "|"

print(top)
print(mid)
print(bottom)