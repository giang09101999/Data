List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    elements = int(input("List[" + str(i) + "] = "))
    List.append(elements)
    
max_value = max(List)

print("The maximum element is:", max_value)
