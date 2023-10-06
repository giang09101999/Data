import numpy as np
List = []

size = int(input("Input number of elements in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

product = np.prod(List)
print("The product of elements in a list:", product)