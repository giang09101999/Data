import pandas as pd

data = {"calories": [1, 2, 3], "duration": [4, 5, 6]}

local_row = pd.DataFrame(data)

row = int(input("Select row you want to display: "))

output = local_row.loc[row]

print(output)