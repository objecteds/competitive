if __name__ == '__main__':
    alnum = False
    alpha = False
    digit = False
    lower = False
    upper = False

    s = input()

    s = [char for char in s]

    for _ in s:

        if _.isalnum() == True:
            alnum = True
    
