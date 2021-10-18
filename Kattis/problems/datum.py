import datetime

days = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]

day, month = input().split()
day = int(day)
month = int(month)

d = datetime.datetime(2009, month, day).weekday()

print(days[d])