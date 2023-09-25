from datetime import datetime
from datetime import date

time = datetime.today()
weekday = date.weekday()

print("Year:", time.year)
print("Month:", time.month)
print("Day:", time.day)
print("---------------")
print("Hour:", time.hour)
print("Minute:", time.minute)
print("Second:", time.second)

print("Weekday", weekday.weekday)
