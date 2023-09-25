import array as arr

array = arr.array('i', [])

size = int(input("Input number of elements of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    array.append(element)

value = int(input("Input desired number you want to delete in array: "))

print("The original:", *array)
while value in array:
    array.remove(value)

print("The array after removing desired elements", *array)
