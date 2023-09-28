from numpy import random

List = []

n = int(input("Input number of elements of List: "))

for i in range(n):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

Permuted_List = random.permutation(List)
print(Permuted_List)