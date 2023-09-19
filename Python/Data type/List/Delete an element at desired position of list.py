List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

position = int(input("Input desired position of list you want to delete: "))
List.pop(position)
print("List:", List)
