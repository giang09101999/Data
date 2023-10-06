List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

index_1 = int(input("Select the 1st index: "))
index_2 = int(input("Select the 2nd index: "))

print("The original list:", List)
tempt = List[index_1]
List[index_1] = List[index_2]
List[index_2] = tempt
print("The swapped list:", List)


