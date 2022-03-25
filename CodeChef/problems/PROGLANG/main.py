tc = int(input())
while tc:
     tc -= 1
     a, b, a1, b1, a2, b2 = map(int, input().split())
     if (a1 == a and b1 == b) or (a1 == b and b1 == a):
         print(1)
     elif (a2 == a and b2 == b) or (a2 == b and b2 == a):
         print(2)
     else:
         print(0)
