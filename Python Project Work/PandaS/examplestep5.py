import pandas as pd

data = {
    "Name": ['Ram', 'Shyam', 'Ghanshyam', 'Dhanshyam', 'Aditi', 'Jagdish', 'Raj', 'Simran'],
    "Age": [28.34, 22, 30, 29, 40, 25, 32, 27],
    "Salary": [50000, 60000, 45000, 70000, 48000, 50000, 55000, 58000],
    "Performance": [85, 90, 78, 92, 88, 95, 80, 89]
}

df = pd.DataFrame(data)

print("Sample DataFrame")
print(df)

# Filter the columns

print("Name (Single return series)")
name = df['Name']
print(name)

#selecting multiple columns
subset = df[["Name", "Salary"]]
print("\n Subset with Name and Salary")
print(subset)
