import math

line = input()

while line != "0 0":
    a, b = map(int, line.split())
    whole = math.floor(a/b)
    remainder = a % b
    print(whole, remainder, "/", b)
    line = input()