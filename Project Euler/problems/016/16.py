'''
2^(15) = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^(1000)?
'''

n = 0

for _ in list(map(int, list(str(2**1000)))):
    n += _

print(n)
