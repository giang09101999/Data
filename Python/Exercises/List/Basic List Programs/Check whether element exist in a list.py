List = []

size = int(input("Input number of elements of List: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

checked_number = int(input("Input a number you want to check: "))

for i in List:
    if i == checked_number:
        count = 1
        break
    else:
        count = 0

if count == 0:
    print(str(checked_number) + " doesn't exist in a list")
else:
    print(str(checked_number) + " exists in a list")

print("The List:", List)