import pandas as pd

df = pd.read_json("sample_Data.json")

print("Display First 10 rows Head")
print(df.head(10))

print("Display Last 10 rows Tail")
print(df.tail(10))
