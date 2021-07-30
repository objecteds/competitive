def to_kmh(knots):
  # Calculate the speed in km/h
  global kmh 
  global message
  kmh = round(1.852 * knots, 1)
  message = ""
  if kmh < 60:
      message = "Go faster!"
  elif kmh >= 60 and kmh < 100:
      message = "Nice one."
  elif kmh >= 100 and kmh < 120:
      message = "Radical!"
  else:
      message = "Whoa! Slow down!"
  

# Write the rest of your program here
knots = float(input("Speed (kn): "))
to_kmh(knots)
print(str(kmh) + " km/h - " + message)

