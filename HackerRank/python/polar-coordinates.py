import cmath

z = input()
if "+" in z:   
    z = z.split('+')
    x = int(z[0])
    y = int(z[1][:-1])
else:
    if z.count('-') == 1:
        z = z.split('-')
        x = int(z[0])
        y = -int(z[1][:-1])
    else:
        z = z.split('-')
        x = -int(z[1])
        y = -int(z[2][:-1])
    

print(abs(complex(x, y)))
print(cmath.phase(complex(x, y)))