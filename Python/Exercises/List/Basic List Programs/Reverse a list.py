List = []

size = int(input("Input number of elements in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("The original list:", List)
List.reverse()
print("The reversed list:", List)