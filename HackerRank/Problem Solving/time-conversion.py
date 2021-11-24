def timeConversion(s):
    # Write your code here
    meridiem = s[-2:]
    hh, mm, ss = s[:-2].split(":")

    if meridiem == "AM":
        if int(hh) < 12:
            return hh + ":" + mm + ":" + ss
        else:
            return "00" + ":" + mm + ":" + ss
    else:
        if int(hh) < 12:
            return str(int(hh)+12) + ":" + mm + ":" + ss
        elif hh == "12":
            return hh + ":" + mm + ":" + ss
        elif len(str(int(hh)+12-24)) == 1:
            return "0" + str(int(hh)+12-24) + ":" + mm + ":" + ss
        else:
            return str((int(hh)+12)-24) + ":" + mm + ":" + ss

print(timeConversion("12:45:54PM"))
