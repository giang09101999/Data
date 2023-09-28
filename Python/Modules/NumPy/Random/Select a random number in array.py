from numpy import random
import numpy as np

List = []

size = int(input("Input number of elements of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)

selected_number = random.choice(Array)

print("The original array:", Array)
print("The selected random element:", selected_number)