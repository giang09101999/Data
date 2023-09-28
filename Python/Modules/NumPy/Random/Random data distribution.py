import numpy as np 
from numpy import random

List = []
List_2 = []
n = int(input("Input number of specific numbers you want to display: "))

print("Input value of each specific number: ")
for i in range(n):
    element = int(input("Number " + str(i + 1)+ " : "))
    List.append(element)

print("Input probability of appearance of each specific number: ")
for i in range(n):
    element = float(input("Number " + str(i + 1)+ " : "))
    List_2.append(element)

Array = np.array(List)
P = np.array(List_2)

Size= int(input("Input number of elements you want to display: "))
display_elements = random.choice(Array, p = P, size=(Size))

print("The random data distribution:", display_elements)