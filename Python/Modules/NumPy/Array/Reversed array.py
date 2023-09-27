import numpy as np

List = []
size = int(input("Input number of elements: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)

print("The original array:", Array)
List.reverse()
Array = np.array(List)
print("The reversed array", Array)
