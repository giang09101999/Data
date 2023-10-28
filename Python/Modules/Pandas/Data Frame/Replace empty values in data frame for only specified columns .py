import pandas as pd

data = pd.read_csv('Data_for_empty_cells.csv')

value = int(input("Input value you want to replace: "))
column = input("Input name of column you want to replace: ")

print("The original data frame: ")
print(data)
print("----------------------------------")
data[column].fillna(value, inplace = True)

print("The replaced data frame: ")
print(data.to_string())

#This operation inserts 130 in empty cells in the "Calories" column (row 18 and 28).
