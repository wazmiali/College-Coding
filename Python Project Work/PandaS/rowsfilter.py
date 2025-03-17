import pandas as pd

# Corrected data with equal-length lists
data = {
    "Name": ['Ram', 'Shyam', 'Ghanshyam', 'Dhanshyam', 'Aditi', 'Jagdish', 'Raj', 'Simran'],
    "Age": [28, 34, 22, 30, 29, 40, 25, 32],  # Fixed length
    "Salary": [50000, 60000, 45000, 70000, 48000, 50000, 55000, 58000],
    "Performance": [85, 90, 78, 92, 88, 95, 80, 89]
}

df = pd.DataFrame(data)

# Filtering employees with salary > 50000
high_salary = df[df['Salary'] > 50000]
print('Employees with salary > 50000')
print(high_salary)

# Filtering employees with Age > 30 and Salary > 50000
filtered = df[(df['Age'] > 30) & (df['Salary'] > 50000)]
print('Employees list Age > 30 + Salary > 50000')
print(filtered)

# Filtering employees with Age > 35 OR Performance > 90
filtered_or = df[(df['Age'] > 35) | (df['Performance'] > 90)]
print('Employees older than 35 OR performance score > 90')
print(filtered_or)
