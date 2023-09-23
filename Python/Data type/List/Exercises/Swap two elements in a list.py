List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)



print("Input elements you want to swap in list: ")

Pos_1 = int(input("Position 1: "))
Pos_2 = int(input("Position 2: "))

print("Original List:", List)
tempt = List[Pos_1]
List[Pos_1] = List[Pos_2]
List[Pos_2] = tempt
print("Swapped List:", List)
