from numpy import random

value = int(input("Input a random number: "))

row = int(input("Input number of rows: "))
column = int(input("Input number of columns: "))

array = random.randint(value, size = (row, column))

print(array)