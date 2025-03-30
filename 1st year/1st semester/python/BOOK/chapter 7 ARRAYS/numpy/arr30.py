import numpy as np

# Create a 3D array
array_3d = np.arange(27).reshape((3, 3, 3))

# Print the original array
print("Original 3D array:")
print(array_3d)

# Slice the 3D array
# Example: Extract a sub-array from the 3D array
sliced_array = array_3d[1:, 1:, 1:]

# Print the sliced array
print("\nSliced 3D array:")
print(sliced_array)