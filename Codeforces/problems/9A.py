from fractions import Fraction

yw = list(map(int, input().split()))
c = 6 - max(yw) + 1

if str(Fraction(c/6).limit_denominator()) == "1":
    print("1/1")
else:
    print(Fraction(c/6).limit_denominator())
