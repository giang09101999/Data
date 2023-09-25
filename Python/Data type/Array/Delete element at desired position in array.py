import array as arr

array = arr.array("i", [])

size = int(input("Input number of elements of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "]= "))
    array.append(element)

position = int(input("Input desired position you want to delete: "))

print("The original array:", *array)
array.pop(position)

print("The array after deleting element:", *array)
