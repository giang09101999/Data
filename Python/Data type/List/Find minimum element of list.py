List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    elements = int(input("List[" + str(i) + "] = "))
    List.append(elements)
    
min_value = min(List)

print("The minimum element is:", min_value)