List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    elements = int(input("List[" + str(i) + "] = "))
    List.append(elements)
    
List.reverse()

print("Reversed List:", List)

