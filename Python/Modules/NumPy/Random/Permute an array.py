import numpy as np
from numpy import random
List = []

n = int(input("Input number of elements: "))

for i in range(n):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)

Array = np.array(List)

Permuted_Array = random.permutation(Array)

print(Permuted_Array)