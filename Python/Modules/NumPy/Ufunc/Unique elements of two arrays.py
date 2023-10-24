import numpy as np

x = []
y = []

size = int(input("Input size of array 1: "))

for i in range(size):
    element = int(input("Array_1[" + str(i) + "] = "))
    x.append(element)

array_1 = np.array(x)

size = int(input("Input size of array 2: "))

for i in range(size):
    element = int(input("Array_2[" + str(i) + "] = "))
    y.append(element)

array_2 = np.array(y)

unique_array = np.union1d(array_1, array_2)

print(unique_array)

