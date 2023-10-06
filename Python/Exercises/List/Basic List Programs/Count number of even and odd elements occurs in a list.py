List = []
positive_count = 0
negative_count = 0
size = int(input("Input number of elements in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

for i in List:
    if (i > 0):
        positive_count = positive_count + 1
    if (i < 0):
        negative_count = negative_count + 1

print("The number of positive elements in list:", positive_count)
print("The number of negative elements in list:", negative_count)