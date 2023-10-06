List = []

size = int(input("Input number of elements in a list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)


print("The positive elements:", end = " ")
for i in set(List):   
    if i > 0:
        print(i, end = " ")

print("\nThe negative elements:", end = " ")
for i in set(List):   
    if i < 0:
        print(i, end = " ")
        
