import pandas as pd 
import numpy as np

x = []

size = int(input("Input size of array: "))

for i in range(size):
    element = int(input("Array[" + str(i) + "] = "))
    x.append(element)

array = np.array(x)

pandas_series = pd.Series(array)
print("========================")
print(pandas_series)