def bonAppetit(bill, k, b):
    # Write your code here
    bill.pop(k)
    cost = 0
    for _ in bill:
        cost += _
    cost /= 2

    if b == cost:
        print("Bon Appetit")
    else:
        print(b - cost)
