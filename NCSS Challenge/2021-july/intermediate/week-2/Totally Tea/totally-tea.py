tour = input("Tour name: ")
cities = input("Cities: ").split()

print(f"Announcing the national {tour} tour!")
print("Visiting these cities...")

for city in cities:
    print(f"🏙️ {city}")

print(f"Get excited for {tour}!")