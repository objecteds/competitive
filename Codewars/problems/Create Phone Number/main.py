def create_phone_number(n):
    n = "".join(list(map(str, n)))
    return f"({n[0:3]}) {n[3:6]}-{n[6:]}"