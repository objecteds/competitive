import calendar

m, d, y = map(int, input().split())
days = ["MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"]

print(days[calendar.weekday(y, m, d)])