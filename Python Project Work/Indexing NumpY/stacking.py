"""
vertically 
horizontally

vstack() row wise
hstack() column wise
"""

import numpy as np

arr1 = np.array([10, 20, 30, 40, 50, 60])
arr2 = np.array([1,2,3,4,5,6,])

print(np.vstack((arr1, arr2))) #vertical stacking
print(np.hstack(((arr1, arr2)))) #horizontal
