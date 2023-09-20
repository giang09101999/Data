Main_List = []
Sub_List = []

Main_list_size = int(input("Input number of elements of main list: "))

for i in range(Main_list_size):
    Main_list_element = int(input("Main List[" + str(i) + "] = "))
    Main_List.append(Main_list_element)

Sub_list_size = int(input("Input number of elements of sub list: "))

for i in range(Sub_list_size):
    Sub_list_element = int(input("Sub List[" + str(i) + "] = "))
    Sub_List.append(Sub_list_element)

position = int(input("Input desired position you want to add sub list into main list: "))
Main_List.insert(position, Sub_List)

print("Main List:", Main_List)
