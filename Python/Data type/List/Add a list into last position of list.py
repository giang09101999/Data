Main_list = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("Main_List[" + str(i) + "] = "))
    Main_list.append(element)

Sub_list = []

Sub_list_size = int(input("Input number of element of list you want to add into main List: "))

for i in range(Sub_list_size):
    element = int(input("Sub_List[" + str(i) + "] = "))
    Sub_list.append(element)

Main_list.extend(Sub_list)

print("Main List:", Main_list)
