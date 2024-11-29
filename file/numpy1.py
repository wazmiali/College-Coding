# Create a array using a numpy
import numpy as np

my_list = [1, 2, 3, 4, 5, 6, 7]

# array1 = np.array([1, 2, 3, 4, 5, 6], dtype=int)
array1 = np.array(my_list, dtype=int)
# print(array1)
# print(type(array1))
# print(len(array1))
# print(array1.shape)
# print(array1.ndim)


# array2 = array1.reshape(2, 3)
# print(array2)
# print(len(array2))
# print(array2.shape)
# print(array2.ndim)

array3 = np.arange(0, 24, 1)
# print(array3)

array4 = array3.reshape(6, 2, 2)
# print(array4)
# print("***********************")
# print(array4[0][0] [0])

x = np.array([[1, 2], [3, 4]], dtype=int)
y = np.array([[2, 3], [4, 5]], dtype=int)
print(x.dot(y))

