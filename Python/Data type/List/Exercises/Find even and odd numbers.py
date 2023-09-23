List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("The even numbers is:")
for num in List:
    if (num % 2) == 0:
        print(num)

print("The odd number is:")
for num in List:
    if (num % 2) != 0:
        print(num)
