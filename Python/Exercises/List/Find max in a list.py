List = []

size = int(input("Input number of elements in List: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("The maximum of List:", max(List))