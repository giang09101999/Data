import numpy as np 

List = []

size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)

added_element = []

n = int(input("Input number of elements you want to append: "))

for i in range(n):
    add = int(input("Element " + str(i + 1) + " : "))
    added_element.append(add)

New_Array = np.append(Array, added_element)
print("The original array:", Array)
print("The array after appending new elements:", New_Array)