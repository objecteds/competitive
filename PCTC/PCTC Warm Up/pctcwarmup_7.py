p = float(input())
c = int(input())

if p < 10:
    change = (p*c*0.01)
    if p-change < 1:
        print(f"${'{:.2f}'.format(p)}")
    else:
        print(f"${'{:.2f}'.format(p-change)}")
else:
    change = (p*c*0.01)
    if p+change > 100:
        print(f"${'{:.2f}'.format(p)}")
    else:
        print(f"${'{:.2f}'.format(p+change)}")