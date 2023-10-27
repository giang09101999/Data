import pandas as pd 

data = pd.read_csv("Data_for_empty_cells.csv")

value = int(input("Input value you want to replace in data frame: "))

updated_values_data = data.fillna(value, inplace = True)

print("The original data frame: ")
print(data)
print("-------------------------------")
print("The updated data frame: ")
print(updated_values_data)
