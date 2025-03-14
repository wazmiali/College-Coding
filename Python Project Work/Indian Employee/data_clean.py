# import numpy as np
# import pandas as pd

# df = pd.read_csv('D:\Python Video Notes\Python Project Work\Indian Employee\Toyota.csv')

# print(df.head())
# print('Missing values in the dataset:')
# print(df.isnull().sum())

# df['FuelType'].fillna(df['FuelType'].mean(), inplace=True)

# df['Age'].fillna(df['Age'].median(), inplace=True)

# df.replace([np.inf, -np.inf], np.nan, inplace=True)

# df.fillna(df.mean(), inplace=True)

# df.drop_duplicates(inplace=True)

# print('Missing values in the dataset after cleaning:')

import numpy as np
import pandas as pd

# Load the dataset
df = pd.read_csv(r'D:\Python Video Notes\Python Project Work\Indian Employee\Toyota.csv')

# Display the first few rows
print(df.head())

# Check for missing values
print('Missing values in the dataset:')
print(df.isnull().sum())

# Handling missing values
# For 'FuelType', we can't use mean for a categorical column, so using mode
if 'FuelType' in df.columns:
    df['FuelType'].fillna(df['FuelType'].mode()[0], inplace=True)

# Filling missing values in 'Age' column with median
if 'Age' in df.columns:
    df['Age'].fillna(df['Age'].median(), inplace=True)

# Replacing infinite values with NaN
df.replace([np.inf, -np.inf], np.nan, inplace=True)

# Filling remaining missing values with column means
df.fillna(df.mean(numeric_only=True), inplace=True)

# Removing duplicate rows
df.drop_duplicates(inplace=True)

# Save the cleaned dataset to a new CSV file
df.to_csv(r'D:\Python Video Notes\Python Project Work\Indian Employee\Toyota_Cleaned.csv', index=False)

# Check for missing values after cleaning
print('Missing values in the dataset after cleaning:')
print(df.isnull().sum())
