import pandas as pd

data = {
      "Name":['Ram', 'Shyam', 'Ghanshyam'],
              "Age":[10,20,30], "city": ['Nagpur', 'Mumbai', 'Delhi']
}

df = pd.DataFrame(data)

print("Display the info of the data set")
print(df.info())

