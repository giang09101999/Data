from numpy import random

List = []

n = int(input("Input number of elements of List: "))

for i in range(n):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("========================")
print("The original List:", List)
random.shuffle(List)
print("The shuffled List:", List)