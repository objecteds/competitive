def print_formatted(number):
    padding = len(bin(number)[2:])
    formatted = ""
    for i in range(1, number+1):
        line = str(i).rjust(padding) + " " + oct(i)[2:].rjust(padding)  + " " + hex(i)[2:].upper().rjust(padding) + " " + bin(i)[2:].rjust(padding) + "\n"
        formatted += line
    print(formatted)