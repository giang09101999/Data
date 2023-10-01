import numpy as np

List_1 = []
size_array_1 = int(input("Input number of elements of Array 1: "))
for i in range(size_array_1):
    element_array_1 = int(input("Array_1[" + str(i) + "] = "))
    List_1.append(element_array_1)

List_2 = []
size_array_2 = int(input("Input number of elements of Array 2: "))
for i in range(size_array_2):
    element_array_2 = int(input("Array_2[" + str(i) + "] = "))
    List_2.append(element_array_2)

Array_1 = np.array(List_1)
Array_2 = np.array(List_2)

Array = np.concatenate((Array_1, Array_2))

print("===============================")
print("Array 1:", Array_1)
print("===============================")
print("Array 2:", Array_2)
print("===============================")
print("The joined array:", Array)
