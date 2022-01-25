x, y, z = [int(input()) for i in range(3)]
print("Jen" if x*z > y*z/2 else "Sid")
print(abs(x*z-y*z/2))