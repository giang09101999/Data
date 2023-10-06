List = []

size = int(input("Input number of element in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

Sum = sum(List)

print("The sum is:", Sum)