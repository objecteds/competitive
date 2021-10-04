'''
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
'''

greater = 20
lcm = 0

while True:
    if (greater % 1 == 0) and (greater % 2 == 0) and (greater % 3 == 0) and (greater % 4 == 0) and (greater % 5 == 0) and (greater % 6 == 0) and (greater % 7 == 0) and (greater % 8 == 0) and (greater % 9 == 0) and (greater % 10 == 0) and (greater % 11 == 0) and (greater % 12 == 0) and (greater % 13 == 0) and (greater % 14 == 0) and (greater % 15 == 0) and (greater % 16 == 0) and (greater % 17 == 0) and (greater % 18 == 0) and (greater % 19 == 0) and (greater % 20 == 0):
        lcm = greater
        break

    greater += 1

print(lcm) # 232792560
