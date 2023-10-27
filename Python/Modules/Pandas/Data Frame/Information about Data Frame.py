import pandas as pd 

data = pd.read_csv("Data.csv")

information = data.info()
print(information)