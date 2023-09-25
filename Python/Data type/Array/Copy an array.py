import array as arr
import numpy as np

array = arr.array('i', [])

size = int(input("Input number of elements of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    array.append(element)

new_array = np.array(array)

array_2= new_array.copy()



print("The original array:", *array)
print("The copied array:", *array_2)

