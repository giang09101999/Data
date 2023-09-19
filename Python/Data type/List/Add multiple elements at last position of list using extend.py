List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)
    
added_elements_list =[]

added_elements_size = int(input("Input number of elements you want to add: "))

for i in range(added_elements_size):
    added_element = int(input("Element " + str(i + 1) + ": "))
    added_elements_list.append(added_element)

print("List before adding elements:", List)

List.extend(added_elements_list)
print("List after adding elements:", List)
