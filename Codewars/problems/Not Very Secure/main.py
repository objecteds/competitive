def alphanumeric(password):
    return len(password) > 0 and all([x.isalnum() and x not in " _" for x in list(password)])