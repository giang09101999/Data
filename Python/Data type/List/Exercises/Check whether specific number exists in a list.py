List = []
count = 0
size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

checked_number = int(input("Input a specific number you want to check: "))

for num in List:
    if num == checked_number:
        count = count + 1
        break

if count == 0:
    print(str(checked_number) + " doesn't exists in list")
else:
    print(str(checked_number) + " exists in list")
