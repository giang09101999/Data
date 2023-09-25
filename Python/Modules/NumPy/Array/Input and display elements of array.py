import numpy as np

List = []
size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

array = np.array(List)
print(array)

