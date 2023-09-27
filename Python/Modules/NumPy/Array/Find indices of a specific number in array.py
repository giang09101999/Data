import numpy as np

List = []
size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)
value = int(input("Input value you want to find indices in array: "))
position = np.where(Array == value)

print("The array:", Array)
print("The indices contain " + str(value) + " :", position)

