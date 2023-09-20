List =[]
count = 0
size = int(input("Input number of elements of list: "))

for i in range(size):
    elements = int(input("List[" + str(i) + "] = " ))
    List.append(elements)
    
desired_elements = int(input("Input desired number you want to delete: "))

for i in List:
    if i == desired_elements:
        count = count + 1
        break
    else:
        count = 0

if count == 0:
    print("List: ", List)
    print("This number doesn't exist in list")
else:
    while desired_elements in List:
        List.remove(desired_elements)
    print("List: ", List)
