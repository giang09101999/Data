import numpy as np

List = []
size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

array = np.array(List)

new_array = array.copy()

print("The original array:", new_array)
print("The copied array:", new_array)