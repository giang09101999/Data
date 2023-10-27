import pandas as pd 

data = pd.read_csv("Data_for_empty_cells.csv")

cleaned_empty_cells_data = data.dropna()

print("The original data: ")
print(data)
print("--------------------------------")
print("The cleaned empty cells data: ")
print(cleaned_empty_cells_data)