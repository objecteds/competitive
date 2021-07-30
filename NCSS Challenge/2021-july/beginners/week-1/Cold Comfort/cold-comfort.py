from turtle import *

sharp_inside_angle = 60
sharp_turn = 180 - sharp_inside_angle
blunt_inside_angle = 120
blunt_turn = 180 - blunt_inside_angle

right(60)
forward(100)
left(sharp_turn)
forward(100)
left(blunt_turn)
forward(100)
left(sharp_turn)
forward(100)

# Fix the mistake above