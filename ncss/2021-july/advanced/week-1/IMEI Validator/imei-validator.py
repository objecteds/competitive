imei = input("Enter number: ")
imei_rev = imei[::-1]
checksum = imei_rev[0]
imei_list = [int(x) for x in imei_rev]
imei_sum = 0

for i in range(1, len(imei_list)+1):
    if i % 2 == 0:
        imei_list[i-1] = int(imei_list[i-1]) * 2

for n in imei_list:
    if n >= 10:
        n_list = [int(x) for x in str(n)]
        for k in n_list:
            imei_sum += k
    else:
        imei_sum += n

if imei_sum % 10 == 0:
    print("Valid.")
else:
    print("Invalid.")