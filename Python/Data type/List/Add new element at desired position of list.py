#Input elements of list and add a new element at desired position by using insert


List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("List before adding new element:", List)

position = int(input("Input the desired position you want to add element: "))
value = int(input("Input value of element you want to add: "))

List.insert(position, value)

print("List after adding a new element:", List)
