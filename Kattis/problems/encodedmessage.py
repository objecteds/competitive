import math

n = int(input())

for i in range(n):
    s = input()
    sq = round(math.sqrt(len(s)))
    arr = []
    word_arr = []
    j = 0
    k = 0
    l = 0
    decoded = ""
    for j in range(sq):
        word_arr = list(s[j*sq:(j+1)*sq])
        arr.append(word_arr)
    for k in reversed(range(sq)):
        for l in range(sq):
            decoded += arr[l][k]
    print(decoded)
