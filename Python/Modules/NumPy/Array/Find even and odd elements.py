import numpy as np
even_count = 0
odd_count = 0
List = []
size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)

for i in Array:
    if (i % 2 == 0):
        even_count = even_count + 1
        break

for i in Array:
    if (i % 2 == 1):
        odd_count = odd_count + 1
        break
print("====================================")
if even_count == 0:
    print("There is no even number in array")
else:
    print("The even number:")
    for i in Array:
        if (i % 2 == 0):
            print(i)

if odd_count == 0:
    print("There is no odd number in array")
else:
    print("The odd number:")
    for i in Array:
        if (i % 2 == 1):
            print(i)