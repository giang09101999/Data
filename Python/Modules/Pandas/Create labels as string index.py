import pandas as pd
import numpy as np

index = []
List = []

index = list(map(str, index))
size = int(input("Input size of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    List.append(element)
print("=====================================")
for i in range(size):
    element = input("Index[" + str(i) + "] = ")
    index.append(element)

array = np.array(List)
index_array = np.array(index)
print("=====================================")
new_array = pd.Series(array, index = index_array)
print(new_array)