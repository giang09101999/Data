import array as arr

array = arr.array('i', [])

size = int(input("Input number of elements of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    array.append(element)

specific_number = int(input("Input a specific number you want to check: "))

count = array.count(specific_number)

if count <= 0:
    print("There is no value of " + str(specific_number) + " in array")
elif (count == 1):
    print("The array contains " + str(count) + " element of " + str(specific_number))
else:
    print("The array contains " + str(count) + " elements of " + str(specific_number))
