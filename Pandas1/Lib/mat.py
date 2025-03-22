import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

car_data = pd.read_csv("Toyota.csv", index_col=0, na_values=["??", "????"])

# describe() is a function which is used to print maths properties of each numerical column like: count, mean, std, min and max
# print(car_data.describe(""))
numerical_data = car_data.select_dtypes(exclude=[object])

plt.scatter(x=numerical_data["Age"], y=numerical_data["Price"], c="red")
plt.title("Scatter plot of price and age of cars")
plt.xlabel("Age(Months)")
plt.ylabel("Price(Euros)")
plt.show()
