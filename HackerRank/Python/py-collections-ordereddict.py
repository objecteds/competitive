from collections import OrderedDict

d = OrderedDict()

for i in range(int(input())):
    line = input().split()
    item_name = ' '.join(line[:-1])
    net_price = int(line[-1])
    
    if item_name in d:
        d[item_name] += net_price
    else:
        d[item_name] = net_price
        
for key, val in d.items():
    print(key, val)
    