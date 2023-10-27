import pandas as pd 

data = {"column 1": [1, 2, 3], "column 2": [4, 5, 6]}

index_arguments = pd.DataFrame(data, index=["row 1", "row 2", "row 3"])

print(index_arguments)