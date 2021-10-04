'''
The sum of the squares of the first ten natural numbers is 385.

The square of the sum of the first ten natural numbers is 3025.

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
'''

square_of_sum = 0
sum_of_square = 0

for i in range(1, 101):
    square_of_sum += i * i

for j in range(1, 101):
    sum_of_square += j
sum_of_square *= sum_of_square

diff = sum_of_square - square_of_sum

print(diff) # 25164150