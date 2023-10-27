import pandas as pd 

data = pd.read_csv("Data.csv")

output = data.head()
print("===============================")
print("The original Data frame:")
print(data)
print("===============================")
print("The expected data frame:")
print(output)