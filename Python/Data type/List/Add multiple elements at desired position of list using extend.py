List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

position = int(input("Input desired position you want to add elements: "))
added_elements_list = []

number_of_added_elements = int(input("Input number of elements you want to add: "))

for i in range(number_of_added_elements):
    added_elements = int(input("Element " + str(i + 1) + ": "))
    added_elements_list.append(added_elements)

List[position:position] = added_elements_list

print(List)
