from numpy import random

row = int(input("Input size of row: "))
column = int(input("Input size of column: "))

x = random.normal(size = (row, column))

print(x)
