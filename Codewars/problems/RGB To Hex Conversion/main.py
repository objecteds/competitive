def rgb(r, g, b):
    l = [r, g, b]
    s = ""
    for i in range(3):
        if l[i] < 0:
            s += "00"
        elif l[i] > 255:
            s += "FF"
        else:
            x = hex(l[i])[2:].upper()
            if len(hex(l[i])[2:]) == 1:
                x = "0" + x
            s += x
    return s