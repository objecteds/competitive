s = input()

w_list = ['_']
l_list = ['abcdefghijklmnopqrstuvwxyz']
u_list = ['ABCDEFGHIJKLMNOPQRSTUVWXYZ']

t_count = len(s)
w_count = 0
l_count = 0
u_count = 0
s_count = 0

for char in s:
    if char in w_list:
        w_count += 1
    elif char.isalpha():
        if char.isupper():
            u_count += 1
        else:
            l_count += 1
    else:
        s_count += 1

print(w_count/t_count)
print(l_count/t_count)
print(u_count/t_count)
print(s_count/t_count)
