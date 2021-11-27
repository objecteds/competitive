s = list(input())
a, b = 0, 0

for i in range(0, len(s), 2):
    person = s[i]
    point = int(s[i+1])

    a += point if person == "A" else 0
    b += point if person == "B" else 0

print('A' if max(a, b) == a else 'B')