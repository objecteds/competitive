def countApplesAndOranges(s, t, a, b, apples, oranges):
    # Write your code here
    fallen_apples = 0
    fallen_oranges = 0

    for apple in apples:
        if a + apple >= s and a + apple <= t:
            fallen_apples += 1

    for orange in oranges:
        if b + orange >= s and b + orange <= t:
            fallen_oranges += 1

    print(fallen_apples)
    print(fallen_oranges)
