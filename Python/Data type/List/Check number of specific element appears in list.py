List = []
count = 0
size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

specific_number = int(input("Input a specific number you want to check: "))

for i in List:
    if specific_number == i:
        count = count + 1
        break

if count == 0:
    print("There is no element of " + str(specific_number) + " appears in list")
else:
    Count = List.count(specific_number)
    print("Element " + str(specific_number) + " appears " + str(Count) + " times in list")    
