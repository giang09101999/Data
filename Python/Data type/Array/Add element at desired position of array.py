import array as arr

array = arr.array('i', [])

size = int(input("Input number of elements of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    array.append(element)

position = int(input("Input desired position you want to add: "))
value = int(input("Input value you want to add: "))
print("The original array:", *array)
array.insert(position, value)

print("The array after inserting:", *array)