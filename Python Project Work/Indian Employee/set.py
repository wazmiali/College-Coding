import numpy as np
import pandas as pd

df = pd.read_csv('D:\Python Video Notes\Python Project Work\Indian Employee\Toyota_Cleaned.csv')

print(df.head())
print('Missing values in the dataset:')
print(df.isnull().sum())