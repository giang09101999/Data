from datetime import time

hours = int(input("Input hour: "))
mins = int(input("Input minute: "))
sec = int(input("Input second: "))

Time = time(hours, mins, sec)

print(Time.second)
print(Time.hour)
print(Time.minute)
