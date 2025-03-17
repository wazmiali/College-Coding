import pandas as pd

# df = pd.read_csv("D:\Python Video Notes\Python Library P-N\PandaS\sales_data_sample.csv", encoding="latin1")

# df = pd.read_excel("SampleSuperstore.xlsx")

# df = pd.read_json("sample_Data.json")

# print(df)

#gcsfs


data = {
      "Name":['Ram', 'Shyam', 'Ghanshyam'],
              "Age":[10,20,30], "city": ['Nagpur', 'Mumbai', 'Delhi']
}

df = pd.DataFrame(data)
print(df)

# to save this file in csv format

df.to_excel("output.xlsx", index=False) 