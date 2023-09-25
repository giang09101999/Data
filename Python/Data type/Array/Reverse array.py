import array as arr

array = arr.array('i', [])

size = int(input("Input number of elements of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "]= "))
    array.append(element)

array.reverse()

print("The reversed array:", *array)
