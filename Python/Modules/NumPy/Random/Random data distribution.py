import numpy as np 
from numpy import random

List = []
List_2 = []
n = int(input("Input number of specific elements you want to add into array: "))

print("Input value of each specific element: ")
for i in range(n):
    element = int(input("Element " + str(i + 1)+ " : "))
    List.append(element)

print("Input value of probability of each specific element: ")
for i in range(n):
    element = float(input("Element " + str(i + 1)+ " : "))
    List_2.append(element)

Array = np.array(List)
P = np.array(List_2)

Size= int(input("Input number of elements you want to display in array: "))
display_elements = random.choice(Array, p = P, size=(Size))

print("The random data distribution:", display_elements)