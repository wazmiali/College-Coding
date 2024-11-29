import pandas as pd

data = pd.read_csv("Toyota.csv", index_col=0)
print(data)                 # Show the full data in csv file
# print(data.index)
# print(data.columns)
# print(data.size)
# print(data.shape)
# print(data.ndim)
# print(data.head(7))          # Display the first 7 rows data
# print(data.tail(6))          #Display the last 6 rows data

# print(data.at[4,"Automatic"])
# print(data.at[4,"KM"])
# print(data.at[0,"Doors"])
# print(data.iat[3,3])
print("*************************")
print(data.loc[2:7:2,"Price"])










