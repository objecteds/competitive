def minimumNumber(n, password):
    numbers = "0123456789"
    lower_case = "abcdefghijklmnopqrstuvwxyz"
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    special_characters = "!@#$%^&*()-+"
    
    has_number = False
    has_lower = False
    has_upper = False
    has_special = False
    
    password = list(password)

    for x in password:
        if x in numbers:
            has_number = True
        if x in lower_case:
            has_lower = True
        if x in upper_case:
            has_upper = True
        if x in special_characters:
            has_special = True
            
    required = 0
    
    if not has_number:
        required += 1
    if not has_lower:
        required += 1
    if not has_upper:
        required += 1
    if not has_special:
        required += 1
    if required + len(password) < 6:
        required += 6 - required - len(password)
        
    return required