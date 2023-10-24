import numpy as np

x = []

size = int(input("Input size of array: "))

for i in  range(size):
    element = int(input("Array[" + str(i) + "] = "))
    x.append(element)

array = np.array(x)

unique_array = np.unique(array)

print("The unique array: ")
print(unique_array)