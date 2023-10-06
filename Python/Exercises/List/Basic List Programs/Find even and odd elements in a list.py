List = []

size = int(input("Input number of elements in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("The even elements of list:", end = " ")
for i in set(List):
    if i % 2 == 0:
        print(i, end = " ")

print("\nThe odd elements of list:", end = " ")
for i in set(List):
    if i % 2 == 1:
        print(i, end = " ")