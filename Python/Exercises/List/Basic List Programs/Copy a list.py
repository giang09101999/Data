List = []

size = int(input("Input number of elements in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

Copied_list = List.copy()
print("The original List:", List)
print("The copied List:", Copied_list)