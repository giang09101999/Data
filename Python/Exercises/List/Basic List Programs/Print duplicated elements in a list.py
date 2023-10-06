List = []

size = int(input("Input number of elements in List: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

unique_elements = []
duplicated_elements = []

for i in List:
    if i not in unique_elements:
        unique_elements.append(i)
    elif i not in duplicated_elements:
        duplicated_elements.append(i)

print("The original List:", List)
print("The duplicated elements in list:", duplicated_elements)