List = []

List = list(map(str, List))

size = int(input("Input size in a list: "))

for i in range(size):
    element = input("List[" + str(i) + "] = ")
    List.append(element)

print(List)