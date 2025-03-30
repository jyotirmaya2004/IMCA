import numpy as np

# Create a 3x3 array
arr = np.array([[1, 2, 3], 
                [4, 5, 6], 
                [7, 8, 9]])

# Slice the array to get the first two rows and the first two columns
sliced_arr = arr[:2, :2]

print("Original Array:")
print(arr)

print("\nSliced Array:")
print(sliced_arr)