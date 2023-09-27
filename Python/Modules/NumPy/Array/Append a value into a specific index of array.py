import numpy as np

List = []
size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)

value = int(input("Input value you want to append into array: "))
index = int(input("Input index you want to append into array: "))

List.insert(index, value)

New_Array = np.array(List)

print(New_Array)