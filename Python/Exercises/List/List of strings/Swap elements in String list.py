import numpy as np
List = ["a", "b", "c", "d"]

index_1 = int(input("Input value of index 1: "))
index_2 = int(input("Input value of index 2: "))

print("The original list:", List)
tempt = List[index_1]
List[index_1] = List[index_2]
List[index_2] = tempt

print("The swapped list:", List)

