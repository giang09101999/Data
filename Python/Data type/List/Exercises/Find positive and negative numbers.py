List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("The positive numbers is:")
for num in List:
    if num > 0:
        print(num)

print("The negative number is:")
for num in List:
    if num < 0:
        print(num)
