import numpy as np

arr = np.array([10, 20, 30, 40])
print("Old array",arr)
new_arr = np.append(arr, [50, 100, 101])

print("New array",new_arr)
