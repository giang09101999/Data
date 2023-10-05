List = []

size = int(input("Input number of elements of List: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("Length of List:", len(List))