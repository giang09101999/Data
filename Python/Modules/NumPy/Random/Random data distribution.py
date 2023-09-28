import numpy as np 
from numpy import random

List = []
List_2 = []
n = int(input("Input number of elements: "))

print("Input value of each element: ")
for i in range(n):
    element = int(input("Array[" + str(i)+ "] = "))
    List.append(element)

print("Input value of probability of each element: ")
for i in range(n):
    element = float(input("Array[" + str(i)+ "] = "))
    List_2.append(element)

Array = np.array(List)
P = np.array(List_2)

Size= int(input("Input number of elements of display array: "))
display_elements = random.choice(Array, p = P, size=(Size))

print("The random data distribution:", display_elements)