import numpy as np
List = []

size = int(input("Input number of elements in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

unique_elements = set(List)
convert_data_type = list(unique_elements)
Mul = np.prod(convert_data_type)

print("The product of elements of duplicatoin removal:", Mul)