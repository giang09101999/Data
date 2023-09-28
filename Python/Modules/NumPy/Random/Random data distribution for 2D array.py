import numpy as np
from numpy import random

List = []
List_2 = []

size = int(input("Input number of specific numbers you want to display: "))

print("Input value of each specific number: ")
for i in range(size):
    element = int(input("Number " + str(i + 1) + " : "))
    List.append(element)

Array = np.array(List)

print("Input probability of appearance of each specific number: ")
for i in range(size):
    probability = float(input("Number " + str(i + 1) + " : "))
    List_2.append(probability)

P = np.array(List_2)

row = int(input("Input number of rows: "))
column = int(input("Input number of columns: "))

Display_elements = random.choice(Array, p = P, size = (row, column))

print("The 2D array to display random elements:")
print(Display_elements)
