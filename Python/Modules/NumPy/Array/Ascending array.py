import numpy as np

List = []
size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)

Array.sort()

print("The ascending array:", Array)
