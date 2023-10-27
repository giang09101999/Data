import pandas as pd 

data = pd.read_csv("Data.csv")

row = int(input("Input number of rows you want to display: "))
output = data.head(row)
print("===============================")
print("The original Data frame:")
print(data)
print("===============================")
print("The expected data frame:")
print(output)