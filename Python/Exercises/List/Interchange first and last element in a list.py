List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("Original List:", List)
tempt = List[0]
List[0] = List[size - 1]
List[size - 1] = tempt

print("Interchanged List:", List)