List = []

size = int(input("Input number of element in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

checked_number = int(input("Input a number you want to check: "))
print("The list contains " + str(List.count(checked_number)) + " value of " + str(checked_number))
