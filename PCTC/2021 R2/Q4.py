cards = "A, 2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K".split(", ")
t, req, cur = 0, 0, 0

while cur >= req:
    t += 10
    cur += cards.index(input())+1
    req += 7

print(t)