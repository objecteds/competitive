x_arr = []
y_arr = []
x = 0
y = 0

for i in range(3):
    x, y = map(int, input().split())
    x_arr.append(x)
    y_arr.append(y)

if x_arr[0] == x_arr[1]:
    x = x_arr[2]
elif x_arr[0] == x_arr[2]:
    x = x_arr[1]
else:
    x = x_arr[0]

if y_arr[0] == y_arr[1]:
    y = y_arr[2]
elif y_arr[0] == y_arr[2]:
    y = y_arr[1]
else:
    y = y_arr[0]

print(x, y)