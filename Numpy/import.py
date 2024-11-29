import numpy as np

arr = np.array([10, 33, 32, 42, 55, 57])

print("Array element with using a break and continue:")

for element in arr:
    if element == 42:
        print("skipping 42")
        continue
    if element == 55:
        print("break the element 55")
        break
    print(element)

