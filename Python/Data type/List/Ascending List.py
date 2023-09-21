List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "]= " ))
    List.append(element)

List.sort()
print("Ascending List:",List)
