n, m = map(int, input().split())

if n > m and n - m > 1:
    print("Dr. Chaz needs " + str(n-m) + " more pieces of chicken!")
elif n > m and n-m == 1:
    print("Dr. Chaz needs " + str(n-m) + " more piece of chicken!")
elif n < m and m-n > 1:
    print("Dr. Chaz will have " + str(m-n) + " pieces of chicken left over!")
elif n < m and m-n == 1:
    print("Dr. Chaz will have " + str(m-n) + " piece of chicken left over!")