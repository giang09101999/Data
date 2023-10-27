import pandas as pd 

data = {"Column 1": [1, 2, 3, 4], "Column 2": [5, 6, 7, 8], "Column 3": [9, 10, 11, 12], "Column 4": [13, 14, 15, 16]}

dataframe = pd.DataFrame(data, index=["Row 1", "Row 2", "Row 3", "Row 4"])

output = dataframe.loc["Row 1"]

print(output)