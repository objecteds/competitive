from turtle import *

size = int(input("Size? "))

pencolor('red')
pensize(5)

forward(size)
left(120)
forward(size)
left(120)
forward(size)
left(120)

penup()
left(90)
forward(size * 2)
right(90)

pendown()
forward(size)
left(120)
forward(size)
left(120)
forward(size)
left(120)