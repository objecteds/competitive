def dayOfProgrammer(year):
    day = ""
    if year != 1918:
        if year > 1918:
            if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
                day = "12.09.{}".format(year)
            else:
                day = "13.09.{}".format(year)
        else:
            if year % 4 == 0:
                 day = "12.09.{}".format(year)
            else:
                day = "13.09.{}".format(year)
    else:
        day = "26.09.1918"
        
    return day