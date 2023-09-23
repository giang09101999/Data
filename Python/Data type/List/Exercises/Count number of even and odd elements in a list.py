List = []
count_even = 0
count_odd = 0
size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

for num in List:
    if (num % 2) == 0:
        count_even = count_even + 1

for num in List:
    if (num % 2) != 0:
        count_odd = count_odd + 1

print("The list contains " + str(count_even) + " even elements in list")
print("The list contains " + str(count_odd) + " odd elements in list")
